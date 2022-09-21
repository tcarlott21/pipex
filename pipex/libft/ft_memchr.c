/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:20:09 by tcarlott          #+#    #+#             */
/*   Updated: 2021/10/10 18:20:10 by tcarlott         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *des, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	b;
	size_t			i;

	i = 0;
	b = (unsigned char)c;
	a = (unsigned char *)des;
	if (n)
	{
		while (i < (n))
		{
			if (a[i] == b)
			{
				return (a + i);
			}
			i++;
		}
	}
	return (NULL);
}
