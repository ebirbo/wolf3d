/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstinser.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebirbo <ebirbo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 19:11:37 by ebirbo            #+#    #+#             */
/*   Updated: 2015/04/03 19:11:38 by ebirbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstinser(t_list **alst, t_list *new)
{
	if (!alst || !new)
		return ;
	new->next = (*alst)->next;
	(*alst)->next = new;
}
