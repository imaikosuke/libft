/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:53:03 by koimai            #+#    #+#             */
/*   Updated: 2023/10/01 15:45:11 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *list, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	void	*new_content;
	t_list	*new_node;
	t_list	*last;

	new_list = NULL;
	while (list != NULL)
	{
		new_content = f(list->content);
		if (new_content == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node = (t_list *)malloc(sizeof(t_list));
		if (new_node == NULL)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node->content = new_content;
		new_node->next = NULL;
		if (new_list == NULL)
			new_list = new_node;
		else
		{
			last = new_list;
			while (last->next != NULL)
				last = last->next;
			last->next = new_node;
		}
		list = list->next;
	}
	return (new_list);
}
