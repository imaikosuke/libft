/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:09:45 by koimai            #+#    #+#             */
/*   Updated: 2023/10/10 11:58:11 by koimai           ###   ########.fr       */
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
	long long	result;
	int			flag;
	size_t		index;

	index = 0;
	result = 0;
	flag = 1;
	while (str[index] == ' ' || ('\t' <= str[index] && str[index] <= '\r'))
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			flag *= -1;
		index++;
	}
	while ('0' <= str[index] && str[index] <= '9')
	{
		if (check_long(flag, result, str[index]) == 1)
			return ((int)LONG_MAX);
		else if (check_long(flag, result, str[index]) == -1)
			return ((int)LONG_MIN);
		result = (result * 10) + str[index] - '0';
		index++;
	}
	return ((int)result * flag);
}
