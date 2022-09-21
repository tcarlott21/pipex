/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:20:25 by tcarlott          #+#    #+#             */
/*   Updated: 2021/10/11 22:37:17 by tcarlott         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *des, int c, size_t n)
{
	char	*str;

	str = (char *)des;
	while (n--)
		*str++ = c;
	return (des);
}
