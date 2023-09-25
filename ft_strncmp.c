/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:48:13 by koimai            #+#    #+#             */
/*   Updated: 2023/09/21 15:56:12 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
		i++;
	return ((int)(s1 - s2));
}

// #include <stdio.h>
// #include <string.h>
// int main() {
//     const char *str1 = "Hello, World!";
//     const char *str2 = "Hello, John!";
//     size_t n;

//     // テストケース1: 同じ文字列を比較
//     n = strlen(str1);
//     int result1 = ft_strncmp(str1, str1, n);
//     printf("Test 1: result=%d, expected=0\n", result1);

//     // テストケース2: 異なる文字列を比較 (同じ長さ)
//     n = strlen(str1);
//     int result2 = ft_strncmp(str1, str2, n);
//     printf("Test 2: result=%d, expected=%d\n", result2, strcmp(str1, str2));

//     // テストケース3: 部分的な一致 (nよりも長い)
//     n = 10;
//     int result3 = ft_strncmp(str1, str2, n);
//     printf("Test 3: result=%d, expected=%d\n", result3, strcmp(str1, str2));

//     // テストケース4: 部分的な一致 (nよりも短い)
//     n = 5;
//     int result4 = ft_strncmp(str1, str2, n);
//     printf("Test 4: result=%d, expected=%d\n", result4, strcmp(str1, str2));

//     return 0;
// }