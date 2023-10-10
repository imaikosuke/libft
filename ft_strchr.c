/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:51:19 by koimai            #+#    #+#             */
/*   Updated: 2023/10/10 16:45:31 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	index;
	size_t	len;
	char	ch;

	ch = (char)c;
	len = ft_strlen(str);
	if (ch == '\0' && str[len] == ch)
		return ((char *)&str[len]);
	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == ch)
			return ((char *)&str[index]);
		index++;
	}
	return (NULL);
}
