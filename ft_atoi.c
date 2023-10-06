/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:09:45 by koimai            #+#    #+#             */
/*   Updated: 2023/10/06 17:29:19 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_long(int flag, long long num, int digit)
{
	if (flag == 1)
	{
		if ((num == 922337203685477580 && '8' <= digit)
			|| 922337203685477581 <= num)
			return (1);
	}
	else if (flag == -1)
	{
		if ((num == 922337203685477580 && '9' <= digit)
			|| 922337203685477581 <= num)
			return (-1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	long	result;
	int		flag;
	size_t	i;

	i = 0;
	result = 0;
	flag = 1;
	while (str[i] == ' ' || ('\t' <= str[i] && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			flag *= -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		if (check_long(flag, result, str[i]) == 1)
			return ((int)LONG_MAX);
		else if (check_long(flag, result, str[i]) == -1)
			return ((int)LONG_MIN);
		result = (result * 10) + str[i] - '0';
		i++;
	}
	return ((int)result * flag);
}
