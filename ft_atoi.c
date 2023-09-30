/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koimai <koimai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:09:45 by koimai            #+#    #+#             */
/*   Updated: 2023/09/29 22:42:10 by koimai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	result;
	int		flag;
	int		i;

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
	while ('0' <= str[i] && str[i] <= '9' && LONG_MIN <= result && result <= LONG_MAX)
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (((int)result) * flag);
}