/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:21:51 by koimai            #+#    #+#             */
/*   Updated: 2023/09/21 15:46:40 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (n == 0)
		return (src_len);
	i = 0;
	while (i < n - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	if (src_len <= n)
		return (src_len);
	return (n - 1);
}

// #include <stdio.h>
// #include <string.h>
// int main() {
//     char dest[20];
//     const char *src = "Hello, World!";
//     size_t n;

//     n = 0;
//     size_t result1 = ft_strlcpy(dest, src, n);
//     printf("Test 1: result=%zu, expected=%zu\n", result1, strlen(src));

//     n = 30;
//     size_t result2 = ft_strlcpy(dest, src, n);
//     printf("Test 2: result=%zu, expected=%zu\n", result2, strlen(src));

//     n = strlen(src);
//     size_t result3 = ft_strlcpy(dest, src, n);
//     printf("Test 3: result=%zu, expected=%zu\n", result3, strlen(src));

//     n = 5;
//     size_t result4 = ft_strlcpy(dest, src, n);
//     printf("Test 4: result=%zu, expected=%zu\n", result4, n - 1);

//     return 0;
// }
