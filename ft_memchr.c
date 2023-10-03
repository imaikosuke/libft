/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:12:56 by koimai            #+#    #+#             */
/*   Updated: 2023/10/03 18:21:24 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;

	ch = (unsigned char)c;
	str = (unsigned char *)s;
	if (str == NULL && n <= 0)
		return (NULL);
	while (n--)
	{
		if (*str == ch)
			return (str);
		str++;
	}
	return (NULL);
}
