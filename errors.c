/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebirbo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/08 18:00:52 by ebirbo            #+#    #+#             */
/*   Updated: 2015/06/10 12:21:11 by ebirbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void declare_and_check_mlx_error(t_env *e)
{
	if (!(e->mlx = mlx_init()))
	{
		ft_putstr_fd("mlx init error\n", 2);
		exit(0);
	}
	else if (!(e->win = mlx_new_window(e->mlx, 512, 384, "ebirbo")))
	{
		ft_putstr_fd("mlx win error\n", 2);
		exit(0);
	}
}
