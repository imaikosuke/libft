/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:39:59 by koimai            #+#    #+#             */
/*   Updated: 2023/10/01 14:48:59 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **list, void (*del)(void *))
{
	t_list	*tmp;

	if (list == NULL || del == NULL)
		return ;
	while (*list != NULL)
	{
		tmp = (*list)->next;
		del((*list)->content);
		free(*list);
		*list = tmp;
	}
	*list = NULL;
}
