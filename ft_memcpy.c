/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:34:35 by koimai            #+#    #+#             */
/*   Updated: 2023/10/03 18:15:10 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest_byte;
	const char	*src_byte;

	if (!dest && !src)
		return (NULL);
	dest_byte = dest;
	src_byte = src;
	i = 0;
	while (i < n)
	{
		dest_byte[i] = src_byte[i];
		i++;
	}
	return (dest);
}
