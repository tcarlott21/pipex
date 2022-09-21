/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:46:28 by tcarlott          #+#    #+#             */
/*   Updated: 2021/10/13 14:46:32 by tcarlott         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*prev;

	if (lst && *lst && del)
	{
		prev = (t_list *)*lst;
		while (prev)
		{
			temp = prev->next;
			ft_lstdelone(prev, del);
			prev = temp;
		}
		*lst = NULL;
	}
}
