/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:38:41 by koimai            #+#    #+#             */
/*   Updated: 2023/10/03 18:03:24 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*byte_ptr1;
	const unsigned char	*byte_ptr2;
	size_t				i;

	byte_ptr1 = s1;
	byte_ptr2 = s2;
	if (!byte_ptr1 && !byte_ptr2)
		return (0);
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)byte_ptr1)[i] != ((unsigned char *)byte_ptr2)[i])
			return (((unsigned char *)byte_ptr1)[i]
				- ((unsigned char *)byte_ptr2)[i]);
		i++;
	}
	return (0);
}
