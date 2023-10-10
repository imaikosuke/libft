/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:37:25 by koimai            #+#    #+#             */
/*   Updated: 2023/10/10 16:20:21 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			index;
	unsigned char	ch;

	str = (unsigned char *)b;
	ch = (unsigned char)c;
	index = 0;
	while (index < len)
	{
		str[index] = ch;
		index++;
	}
	return (b);
}
