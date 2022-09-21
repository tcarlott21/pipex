/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 21:15:28 by tcarlott          #+#    #+#             */
/*   Updated: 2021/10/12 18:54:01 by tcarlott         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned char	*b;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
	{
		b = malloc(sizeof(char) + 1);
		b[0] = 0;
		return ((char *)b);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	b = malloc(len + 1);
	if (!b)
		return (NULL);
	while (i < len)
	{
		b[i] = s[start + i];
		i++;
	}
	b[i] = '\0';
	return ((char *)b);
}
