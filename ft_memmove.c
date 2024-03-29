/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:03:35 by koimai            #+#    #+#             */
/*   Updated: 2023/10/10 16:44:06 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*tmp;
	unsigned char	*s;
	size_t			i;

	tmp = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!tmp && !s)
		return (NULL);
	if (dest > src)
	{
		while (len--)
			tmp[len] = s[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			tmp[i] = s[i];
			i++;
		}
	}
	return (dest);
}
