/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:07:28 by koimai            #+#    #+#             */
/*   Updated: 2023/09/29 01:22:22 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	is_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	int		trimmed_len;
	char	*trimmed_str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && is_in_set(s1[start], set))
		start++;
	end = start;
	len = 0;
	while (s1[end] != '\0')
	{
		if (!is_in_set(s1[end], set))
			len = end + 1;
		end++;
	}
	trimmed_len = len - start;
	if (trimmed_len <= 0)
		return (ft_strdup(""));
	trimmed_str = (char *)malloc((trimmed_len + 1) * sizeof(char));
	if (trimmed_str == NULL)
		return (NULL);
	end = -1;
	while (++end < trimmed_len)
		trimmed_str[end] = s1[start + end];
	trimmed_str[trimmed_len] = '\0';
	return (trimmed_str);
}
