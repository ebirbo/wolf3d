/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freetab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebirbo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/08 18:08:38 by ebirbo            #+#    #+#             */
/*   Updated: 2015/06/08 18:10:23 by ebirbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_freetab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		ft_memdel((void *)&tab[i++]);
	ft_memdel((void *)&tab);
}