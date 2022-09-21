/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlott <tcarlott@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:49:52 by tcarlott          #+#    #+#             */
/*   Updated: 2021/10/14 13:34:41 by tcarlott         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*elem;

	if (!lst || !f)
		return (NULL);
	elem = ft_lstnew(f(lst->content));
	if (!elem)
		return (NULL);
	nlst = elem;
	lst = lst->next;
	while (lst)
	{
		elem = ft_lstnew(f(lst->content));
		if (!elem)
		{
			ft_lstclear(&nlst, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&nlst, elem);
	}
	return (nlst);
}
