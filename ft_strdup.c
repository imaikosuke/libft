/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:15:20 by koimai            #+#    #+#             */
/*   Updated: 2023/10/10 16:21:46 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	index;
	size_t	len;
	char	*duplicate;

	len = 0;
	while (s1[len] != '\0')
		len++;
	duplicate = malloc((len + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);
	index = 0;
	while (s1[index] != '\0')
	{
		duplicate[index] = s1[index];
		index++;
	}
	duplicate[index] = '\0';
	return (duplicate);
}
