/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:34:35 by koimai            #+#    #+#             */
/*   Updated: 2023/10/10 10:35:39 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_byte;
	unsigned char	*src_byte;

	if (!dest && !src)
		return (NULL);
	dest_byte = (unsigned char *)dest;
	src_byte = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest_byte[i] = src_byte[i];
		i++;
	}
	return (dest);
}
