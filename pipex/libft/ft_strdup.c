/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:20:32 by tcarlott          #+#    #+#             */
/*   Updated: 2021/10/12 18:12:00 by tcarlott         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*a;
	char	*b;
	int		i;

	b = (char *)str;
	i = 0;
	i = ft_strlen(b);
	a = (char *)malloc(i + 1);
	if (a == NULL)
		return (NULL);
	i = 0;
	while (b[i] != '\0')
	{
		a[i] = b[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
