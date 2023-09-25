/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:03:35 by koimai            #+#    #+#             */
/*   Updated: 2023/09/22 17:17:16 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*tmp;
	const unsigned char	*s;
	size_t				i;

	tmp = dest;
	s = src;
	if (dest <= src)
	{
		i = -1;
		while (++i < n)
			tmp[i] = s[i];
	}
	else
	{
		tmp += n;
		s += n;
		i = n + 1;
		while (0 < --i)
			tmp[i - 1] = s[i - 1];
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// #define BUFSIZE 64
// #define BEGIN 3
// #define N 5
// int main(void)
// {
//   char str[] = "0123456789";
//   char s[BUFSIZE], t[BUFSIZE];
//   size_t len;
//   len = strlen(str) + 1;
//   ft_memmove(s, str, len);
//   ft_memmove(t, str, len);
//   printf("ft_memmove(): s = %s, t = %s\n", s, t);
//   ft_memmove(t + BEGIN, t, N);
//   printf("ft_memmove(): t = %s\n", t);
//   ft_memmove(t, t + BEGIN, N);
//   printf("ft_memmove(): t = %s\n", t);
//   return 0;
// }
