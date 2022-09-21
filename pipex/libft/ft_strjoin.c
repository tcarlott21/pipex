/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 21:59:40 by tcarlott          #+#    #+#             */
/*   Updated: 2021/10/10 22:29:50 by tcarlott         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*a;

	if (s1 && s2)
	{
		a = (char *)malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
		if (!a)
			return (NULL);
		j = 0;
		i = 0;
		while (s1[j] != '\0')
		{
			a[j++] = s1[i++];
		}
		i = 0;
		while (s2[i] != '\0')
		{
			a[j++] = s2[i++];
		}
		a[j] = '\0';
		return (a);
	}
	return (NULL);
}
