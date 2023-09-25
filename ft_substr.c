/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:52:15 by koimai            #+#    #+#             */
/*   Updated: 2023/09/25 17:08:18 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	dest = (char *)malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0')
	{
		dest[i] = s[start];
		i++;
		start++;
	}
	dest[start] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
// 	char src[] = "substr fucntion Implementation";
// 	int start = 7;
// 	size_t len = 5;
// 	char *dest = ft_substr(src, start, len);
// 	printf("test: %s\n", dest);
// 	free(dest);
// 	return (0);
// }