/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:29:12 by koimai            #+#    #+#             */
/*   Updated: 2023/09/30 14:36:19 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// mallocをしている途中にエラーが発生した場合それまでのメモリをfreeしなければいけない
// void	free_str(char const *str, char *word, int i)
// {
// 	return ;
// }

int	count_strings(char const *str, char charset)
{
	int	i;
	int	count;

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

int	ft_strlen_sep(char const *str, char charset)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != charset)
		i++;
	return (i);
}

char	*ft_word(char const *str, char charset)
{
	int		len;
	int		i;
	char	*word;

	i = 0;
	len = ft_strlen_sep(str, charset);
	word = (char *)malloc((len + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *str, char charset)
{
	int			word_index;
	char const	*start;
	int			i;
	char		**strings;

	i = 0;
	word_index = 0;
	strings = (char **)malloc((count_strings(str, charset) + 1)
			* sizeof(char *));
	if (strings == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] == charset)
			i++;
		if (str[i] != '\0')
		{
			start = &str[i];
			strings[word_index++] = ft_word(start, charset);
		}
		while (str[i] != '\0' && str[i] != charset)
			i++;
	}
	strings[word_index] = NULL;
	return (strings);
}

// #include <stdio.h>

// int	main()
// {
// 	int		index;
// 	char	**split;

// 	split = ft_split(" Tripouille ", ' ');
// 	if (split == NULL)
// 	{
// 		free(split);
// 		return (0);
// 	}
// 	index = 0;
// 	while (split[index])
// 	{
// 		printf("%s\n", split[index]);
// 		index++;
// 	}
// 	index = 0;
// 	while (split[index])
// 	{
// 		free(split[index]);
// 		index++;
// 	}
// 	free(split);
// 	return (0);
// }
