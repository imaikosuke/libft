/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:37:25 by koimai            #+#    #+#             */
/*   Updated: 2023/09/21 13:51:14 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = s;
	c &= 255;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// #define BUFSIZE 16

// int main()
// {
// 	char buf1[BUFSIZE];
// 	char buf2[BUFSIZE];
// 	ft_memset(buf1, '\0', BUFSIZE);
// 	ft_memset(buf2, '\0', BUFSIZE);
// 	printf("初期化後の配列の要素を表示\n");
// 	printf("buf1:%s\n", buf1);
// 	printf("buf2:%s\n", buf2);
// 	ft_memset(buf1, 'a', 4);
// 	ft_memset(buf1, 'b', 2);
// 	ft_memset(buf2, 'c', 3);
// 	printf("配列の要素を表示\n");
// 	printf("buf1:%s\n", buf1);
// 	printf("buf2:%s\n", buf2);
// }
