/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:38:41 by koimai            #+#    #+#             */
/*   Updated: 2023/09/29 18:51:06 by koimai           ###   ########.fr       */
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
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)byte_ptr1)[i] != ((unsigned char *)byte_ptr2)[i])
			return (((unsigned char *)byte_ptr1)[i] - ((unsigned char *)byte_ptr2)[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main() {
//     char str1[] = "Hello";
//     char str2[] = "Hello";

//     int result = ft_memcmp(str1, str2, 5);
//     if (result == 0) {
//         printf("文字列は等しいです。\n");
//     } else if (result < 0) {
//         printf("str1がstr2より小さいです。\n");
//     } else {
//         printf("str1がstr2より大きいです。\n");
//     }

//     return 0;
// }