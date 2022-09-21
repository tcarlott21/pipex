/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:30:29 by tcarlott          #+#    #+#             */
/*   Updated: 2021/10/12 20:58:20 by tcarlott         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	res(int d)
{
	int	r;

	r = 0;
	if (d <= 0)
	{
		r++;
	}
	while (d)
	{
		d = d / 10;
		r++;
	}
	return (r);
}

char	*ft_itoa(int n)
{
	char			*toa;
	unsigned int	i;
	long			e;

	e = n;
	i = res(n);
	toa = malloc(i + 1);
	if (!toa)
		return (NULL);
	if (n == 0)
		toa[0] = '0';
	if (e < 0)
	{
		toa[0] = '-';
		e = -e;
	}
	toa[i--] = '\0';
	while (e)
	{
		toa[i] = (e % 10) + '0';
		e = e / 10;
		i--;
	}
	return (toa);
}
