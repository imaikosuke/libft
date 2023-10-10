/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:37:25 by koimai            #+#    #+#             */
/*   Updated: 2023/10/10 12:01:19 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			index;
	char			ch;

	str = (unsigned char *)s;
	ch = (unsigned char)c;
	index = 0;
	while (index < n)
	{
		str[index] = ch;
		index++;
	}
	return (s);
}
