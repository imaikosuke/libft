/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:35:31 by koimai            #+#    #+#             */
/*   Updated: 2023/09/22 16:57:24 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*result;
	int			i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			result = &str[i];
		i++;
	}
	if (result != NULL)
		return ((char *)result);
	return (NULL);
}

// #include <stdio.h>
// int main() {
//     const char *str = "Hello, World!";
//     int ch = 'o';

//     // custom_strrchr関数の使用例
//     char *result = ft_strrchr(str, ch);
//     if (result != NULL) {
//         printf("Character '%c' found at position: %ld\n", ch, result - str);
//     } else {
//         printf("Character '%c' not found.\n", ch);
//     }

//     return 0;
// }