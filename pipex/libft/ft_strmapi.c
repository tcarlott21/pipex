/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 22:32:37 by tcarlott          #+#    #+#             */
/*   Updated: 2021/10/11 23:23:16 by tcarlott         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ar;

	if (!s)
		return (NULL);
	i = ft_strlen((char *)s);
	ar = malloc(sizeof(char) * (i + 1));
	if (!ar)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ar[i] = f(i, s[i]);
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
