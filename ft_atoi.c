/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:09:45 by koimai            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/10/05 18:34:22 by koimai           ###   ########.fr       */
=======
/*   Updated: 2023/10/06 09:29:30 by koimai           ###   ########.fr       */
>>>>>>> 58f30c4b034738e8de524b90460ecac273aa4eec
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
static int	check_long(int flag, long num, int digit)
=======
int	check_long(int flag, long long num, int digit)
>>>>>>> 58f30c4b034738e8de524b90460ecac273aa4eec
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
