/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:20:18 by tcarlott          #+#    #+#             */
/*   Updated: 2021/10/10 18:20:19 by tcarlott         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	char	*des;
	char	*sou;
	size_t	i;

	i = 0;
	sou = (char *)source;
	des = (char *)destination;
	if (!n || destination == source)
		return (destination);
	while (n--)
	{
		des[i] = sou[i];
		i++;
	}
	return (destination);
}
