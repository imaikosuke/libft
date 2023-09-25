/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:15:20 by koimai            #+#    #+#             */
/*   Updated: 2023/09/21 14:25:32 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	unsigned int	i;
	unsigned int	len;
	char			*duplicate;

	len = 0;
	while (src[len] != '\0')
		len++;
	duplicate = malloc((len + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		duplicate[i] = src[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}

// #include <stdio.h>

// int main(void)
// {
// 	char test[] = "abcdefghijklmn";
// 	char *d;

// 	d = ft_strdup(test);
// 	printf("d: %s\n", d);
// 	return (0);
// }
