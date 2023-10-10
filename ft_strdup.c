/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:15:20 by koimai            #+#    #+#             */
/*   Updated: 2023/10/10 15:23:20 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	size_t	index;
	size_t	len;
	char	*duplicate;

	len = 0;
	while (src[len] != '\0')
		len++;
	duplicate = malloc((len + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);
	index = 0;
	while (src[index] != '\0')
	{
		duplicate[index] = src[index];
		index++;
	}
	duplicate[index] = '\0';
	return (duplicate);
}
