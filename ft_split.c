/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:29:12 by koimai            #+#    #+#             */
/*   Updated: 2023/10/10 15:53:26 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_str(char **strings)
{
	size_t	c;

	c = 0;
	while (strings[c] != NULL)
	{
		free(strings[c]);
		c++;
	}
	free(strings);
}

static int	count_strings(char const *str, char charset)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] == charset)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && str[i] != charset)
			i++;
	}
	return (count);
}

static char	*ft_word(char const *str, char charset)
{
	size_t		len;
	size_t		i;
	char		*word;

	len = 0;
	while (str[len] && str[len] != charset)
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static int	set_str(char const *str, char charset, char **strings,
		size_t *word_index)
{
	size_t		i;
	char const	*start;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] == charset)
			i++;
		if (str[i] != '\0')
		{
			start = &str[i];
			strings[*word_index] = ft_word(start, charset);
			if (strings[(*word_index)++] == NULL)
				return (1);
			while (str[i] != '\0' && str[i] != charset)
				i++;
		}
	}
	return (0);
}

char	**ft_split(char const *str, char charset)
{
	size_t	word_index;
	char	**strings;

	if (!str)
		return (NULL);
	word_index = 0;
	strings = (char **)malloc((count_strings(str, charset) + 1)
			* sizeof(char *));
	if (strings == NULL)
		return (NULL);
	if (set_str(str, charset, strings, &word_index) == 1)
	{
		free_str(strings);
		return (NULL);
	}
	strings[word_index] = NULL;
	return (strings);
}
