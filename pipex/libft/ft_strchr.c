/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:20:29 by tcarlott          #+#    #+#             */
/*   Updated: 2021/10/10 18:20:30 by tcarlott         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*a;
	char	b;
	int		i;

	i = 0;
	b = (char)c;
	a = (char *)s;
	while (a[i])
	{
		if (a[i] == b)
		{
			return (a + i);
		}
		i++;
	}
	if ((a[i] == '\0') && (b == '\0'))
		return (a + i);
	return (NULL);
}
