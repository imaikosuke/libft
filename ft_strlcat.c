/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:25:39 by koimai            #+#    #+#             */
/*   Updated: 2023/10/04 17:20:09 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	n;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (!dest && size <= 0)
		return (src_len);
	while (dest[dest_len] != '\0')
		dest_len++;
	if (size <= dest_len)
		return (size + src_len);
	n = 0;
	while (src[n] != '\0' && dest_len + n < size - 1)
	{
		dest[dest_len + n] = src[n];
		n++;
	}
	dest[dest_len + n] = '\0';
	return (src_len + dest_len);
}
