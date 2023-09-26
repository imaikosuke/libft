/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:48:13 by koimai            #+#    #+#             */
/*   Updated: 2023/09/26 18:20:48 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
		i++;
	if (0 < s1[i] - s2[i])
		return (1);
	else if (0 > s1[i] - s2[i])
		return (-1);
	else
		return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	const char s1[] = "t";
// 	const char s2[] = "";
// 	size_t n = 0;
// 	int result = ft_strncmp(s1, s2, n);
// 	printf("result: %d\n", result);
// 	return 0;
// }
