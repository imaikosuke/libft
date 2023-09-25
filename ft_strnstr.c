/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:56:16 by koimai            #+#    #+#             */
/*   Updated: 2023/09/21 16:35:20 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;
	size_t	j;

	needle_len = 0;
	while (needle[needle_len] != '\0')
		needle_len++;
	if (needle_len == 0)
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (i + j < len && haystack[i + j] == needle[j] && needle[j] != '\0')
			j++;
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main() {
//     const char *haystack = "This is a test string.";
//     const char *needle1 = "test";
//     const char *needle2 = "is";
//     const char *needle3 = "xyz";
//     const char *needle4 = "string.";

//     // テストケース1: haystack内でneedle1を見つける
//     char *result1 = ft_strnstr(haystack, needle1, 20);
//     printf("Test 1: result=\"%s\"\n", result1);

//     // テストケース2: haystack内でneedle2を見つける
//     char *result2 = ft_strnstr(haystack, needle2, 20);
//     printf("Test 2: result=\"%s\"\n", result2);

//     // テストケース3: haystack内でneedle3は見つからない
//     char *result3 = ft_strnstr(haystack, needle3, 20);
//     printf("Test 3: result=\"%s\"\n", result3);

//     // テストケース4: haystack内でneedle4を見つける
//     char *result4 = ft_strnstr(haystack, needle4, 22);
//     printf("Test 4: result=\"%s\"\n", result4);

//     // テストケース5: needle1が空の場合、haystackの先頭を返す
//     char *result5 = ft_strnstr(haystack, "", 20);
//     printf("Test 5: result=\"%s\"\n", result5);

//     return 0;
// }