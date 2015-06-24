/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebirbo <ebirbo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 19:11:48 by ebirbo            #+#    #+#             */
/*   Updated: 2015/04/03 19:11:50 by ebirbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (lst && f)
	{
		if (lst->next != NULL)
		{
			f(lst);
			ft_lstiter(lst->next, f);
		}
		else
			f(lst);
	}
}
