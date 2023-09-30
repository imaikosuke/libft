/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:37:07 by koimai            #+#    #+#             */
/*   Updated: 2023/09/30 18:04:58 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*dest;

	if (count == 0 || size == 0)
		total_size = 1;
	else if (SIZE_MAX / count < size)
		return (NULL);
	else
		total_size = count * size;
	dest = malloc(total_size);
	if (!dest)
		return (NULL);
	ft_bzero(dest, total_size);
	return (dest);
}
