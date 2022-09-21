/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:19:46 by tcarlott          #+#    #+#             */
/*   Updated: 2021/10/10 18:19:47 by tcarlott         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c < 91) && (c > 64)) || ((c < 123) && (c > 96))
		|| ((c < 58) && (c > 47)))
	{
		return (1);
	}
	return (0);
}