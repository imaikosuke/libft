/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:53:03 by koimai            #+#    #+#             */
/*   Updated: 2023/10/03 15:30:00 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	t_list	**last;

	new_list = NULL;
	last = &new_list;
	while (lst)
	{
		new_node = (t_list *)malloc(sizeof(t_list));
		new_node->content = f(lst->content);
		if (!new_node || !new_node->content)
		{
			if (new_node)
				free(new_node);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node->next = NULL;
		*last = new_node;
		last = &new_node->next;
		lst = lst->next;
	}
	return (new_list);
}
