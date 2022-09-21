/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:18:41 by tcarlott          #+#    #+#             */
/*   Updated: 2021/10/12 17:24:33 by tcarlott         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char ch)
{
	if (ch == ' ' || ch == '\t' || ch == '\v'
		|| ch == '\r' || ch == '\n' || ch == '\f')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long long int	i;
	long long int	sing;
	long long int	count;
	long long int	res;

	i = 0;
	res = 0;
	count = 0;
	sing = 1;
	while (check(str[i]) == 1)
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sing = -sing;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
		count++;
	}
	return (res * sing);
}
