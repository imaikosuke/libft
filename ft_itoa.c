/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:06:07 by koimai            #+#    #+#             */
/*   Updated: 2023/10/05 19:52:27 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_num(int n, long n_aux)
{
	size_t	count;

	count = 0;
	if (n == 0)
		count = 1;
	else
	{
		while (n_aux != 0)
		{
			n_aux /= 10;
			count++;
		}
		if (n < 0)
			count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	n_aux;
	size_t	len;
	size_t	i;
	char	*res;

	n_aux = n;
	if (n_aux < 0)
		n_aux = -n_aux;
	len = count_num(n, n_aux);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	res[len - 1] = n_aux % 10 + '0';
	while (n_aux != 0)
	{
		res[len - 1 - i] = (n_aux % 10) + '0';
		n_aux /= 10;
		i++;
	}
	if (n < 0)
		res[0] = '-';
	res[len] = '\0';
	return (res);
}
