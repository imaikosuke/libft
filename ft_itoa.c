/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:06:07 by koimai            #+#    #+#             */
/*   Updated: 2023/10/10 10:20:22 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_num(int n, long abs_n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		count = 1;
	else
	{
		while (abs_n != 0)
		{
			abs_n /= 10;
			count++;
		}
		if (n < 0)
			count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	abs_n;
	size_t	len;
	size_t	i;
	char	*res;

	abs_n = n;
	if (abs_n < 0)
		abs_n = -abs_n;
	len = count_num(n, abs_n);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (abs_n != 0)
	{
		res[len - 1 - i] = (abs_n % 10) + '0';
		abs_n /= 10;
		i++;
	}
	if (n < 0)
		res[0] = '-';
	else if (n == 0)
		res[0] = '0';
	res[len] = '\0';
	return (res);
}
