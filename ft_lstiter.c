/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:50:50 by koimai            #+#    #+#             */
/*   Updated: 2023/10/01 14:52:15 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *list, void(*f)(void *))
{
	if (list == NULL || f == NULL)
		return ;
	while (list != NULL)
	{
		f(list->content);
		list = list->next;
	}
}
