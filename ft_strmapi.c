/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:07:03 by koimai            #+#    #+#             */
/*   Updated: 2023/09/26 19:38:10 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char const	*s1;
	char		(*test)(unsigned int, char);

	s1 = s;
	s = s1;
	test = NULL;
	f = test;
	test = f;
	return ("test");
}
