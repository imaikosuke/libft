/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:12:56 by koimai            #+#    #+#             */
/*   Updated: 2023/09/21 12:33:27 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	c &= 255;
	str = (unsigned char *)s;
	if (str == NULL)
		return (NULL);
	while (n--)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (NULL);
}
