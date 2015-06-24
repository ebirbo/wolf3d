/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebirbo <ebirbo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 19:12:17 by ebirbo            #+#    #+#             */
/*   Updated: 2015/04/03 19:12:18 by ebirbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*alist;
	t_list	*new_list;
	t_list	*link;

	if (!lst || !f)
		return (0);
	link = f(lst);
	new_list = ft_lstnew(link->content, link->content_size);
	if (!new_list)
		return (0);
	alist = new_list;
	while (lst->next != NULL)
	{
		link = f(lst->next);
		new_list->next = ft_lstnew(link->content, link->content_size);
		if (new_list->next == NULL)
			return (0);
		new_list = new_list->next;
		lst = lst->next;
	}
	return (alist);
}
