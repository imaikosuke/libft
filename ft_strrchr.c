/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:35:31 by koimai            #+#    #+#             */
/*   Updated: 2023/09/26 17:40:45 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;

	c &= 255;
	len = ft_strlen(str) + 1;
	while (0 < len)
	{
		len--;
		if (str[len] == c)
			return ((char *)&str[len]);
	}
	return (NULL);
}
