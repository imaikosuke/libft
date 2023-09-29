/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:06:07 by koimai            #+#    #+#             */
/*   Updated: 2023/09/29 17:30:00 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_num(long int n)
{
	long int	count;

	count = 1;
	while (10 <= n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long int	n_aux;
	int			len;
	char		*res;
	int			i;

	n_aux = n;
	if (n_aux < 0)
		n_aux = -n_aux;
	len = count_num(n_aux);
	if (n < 0)
		len++;
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	i = len - 1;
	while (0 <= i)
	{
		res[i] = (n_aux % 10) + '0';
		n_aux /= 10;
		i--;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}