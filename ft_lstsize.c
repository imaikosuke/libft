/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:31:21 by koimai            #+#    #+#             */
/*   Updated: 2023/10/05 18:51:37 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *list)
{
	size_t	size;

	size = 0;
	while (list != NULL)
	{
		size++;
		list = list->next;
	}
	return (size);
}
