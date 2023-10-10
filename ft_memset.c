/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:37:25 by koimai            #+#    #+#             */
/*   Updated: 2023/10/10 15:22:21 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	index;
	char	ch;

	str = s;
	ch = (char)c;
	index = 0;
	while (index < n)
	{
		str[index] = ch;
		index++;
	}
	return (s);
}
