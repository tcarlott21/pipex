/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:20:55 by tcarlott          #+#    #+#             */
/*   Updated: 2021/10/12 18:09:56 by tcarlott         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*a;
	char	b;
	int		i;
	char	*pos;

	i = 0;
	b = (char)c;
	a = (char *)s;
	pos = NULL;
	if (c == '\0')
		return (a + ft_strlen(a));
	while (a[i])
	{
		if (a[i] == b)
			pos = &a[i];
		i++;
	}
	return (pos);
}
