/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:51:19 by koimai            #+#    #+#             */
/*   Updated: 2023/10/10 16:21:15 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	index;
	size_t	len;
	char	ch;

	ch = (char)c;
	len = ft_strlen(s);
	if (ch == '\0' && s[len] == ch)
		return ((char *)&s[len]);
	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == ch)
			return ((char *)&s[index]);
		index++;
	}
	return (NULL);
}
