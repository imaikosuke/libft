/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:35:31 by koimai            #+#    #+#             */
/*   Updated: 2023/10/02 14:15:57 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;
	char	ch;

	ch = (char)c;
	len = ft_strlen(str) + 1;
	while (0 < len)
	{
		len--;
		if (str[len] == ch)
			return ((char *)&str[len]);
	}
	return (NULL);
}
