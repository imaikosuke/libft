/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:53:03 by koimai            #+#    #+#             */
/*   Updated: 2023/10/10 17:00:00 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_clear(t_list *node, t_list *list, void (*del)(void *), int n)
{
	if (!node && n == 1)
	{
		ft_lstclear(&list, del);
		return (1);
	}
	else if (!node && n == 2)
	{
		free(node);
		ft_lstclear(&list, del);
		return (1);
	}
	return (0);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	t_list	**tmp;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	tmp = &new_list;
	while (lst)
	{
		new_node = (t_list *)malloc(sizeof(t_list));
		if (ft_clear(new_node, new_list, del, 1))
			return (NULL);
		new_node->content = f(lst->content);
		if (ft_clear(new_node, new_list, del, 2))
			return (NULL);
		new_node->next = NULL;
		*tmp = new_node;
		tmp = &new_node->next;
		lst = lst->next;
	}
	return (new_list);
}
