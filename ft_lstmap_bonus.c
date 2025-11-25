/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchoo <zchoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:31:48 by zchoo             #+#    #+#             */
/*   Updated: 2025/11/25 15:23:43 by zchoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*node;

	first = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (node)
			ft_lstadd_back(&first, node);
		else
			ft_lstclear(&first, del);
		lst = lst->next;
	}
	return (first);
}
