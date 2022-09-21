/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:50:29 by tcarlott          #+#    #+#             */
/*   Updated: 2021/10/12 22:41:13 by tcarlott         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		st;
	int		en;
	char	*ar;

	ar = 0;
	if (s1 && set)
	{
		st = 0;
		en = ft_strlen(s1);
		while (s1[st] && ft_strchr(set, s1[st]))
			st++;
		while (en > st && ft_strchr(set, s1[en - 1]))
			en--;
		ar = malloc(en - st + 1);
		if (!ar)
			return (NULL);
		ft_strlcpy(ar, s1 + st, en - st + 1);
	}
	return (ar);
}
