/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:25:39 by koimai            #+#    #+#             */
/*   Updated: 2023/09/29 00:46:46 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	n;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	n = 0;
	while (src[n] != '\0' && dest_len + n < size - 1)
	{
		dest[dest_len + n] = src[n];
		n++;
	}
	dest[dest_len + n] = '\0';
	return (src_len + dest_len);
}

// #include <stdio.h>
// int main() {
//     char dest[20] = "Hello, ";
//     const char *src = "world!";
//     size_t dest_size = sizeof(dest);

//     // strlcat 関数を使用して文字列を連結
//     size_t result = ft_strlcat(dest, src, dest_size);

//     if (result >= dest_size) {
//         // dest バッファが不足した場合のエラーハンドリング
//         printf("Destination buffer is too small.\n");
//     } else {
//         // 結合後の文字列を表示
//         printf("Concatenated string: %s\n", dest);
//     }

//     return 0;
// }