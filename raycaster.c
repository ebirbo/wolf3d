/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycaster.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebirbo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/08 18:01:52 by ebirbo            #+#    #+#             */
/*   Updated: 2015/06/08 18:01:54 by ebirbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void raycaster(t_env *e)
{
	e->x = 0;
	while (e->x < e->w)
	{
		first_declarations(e);
		calculate_mouvement(e);
		dda_algorithm(e);
		draw_wall_1(e);
		draw_wall_2(e);
		select_color_and_draw(e);
		e->x++;
	}
	if (e->minimap % 2 == 0)
	{
		mini_map(e);
		draw_map(e, (int)e->posx, (int)e->posy, 1);
		draw_fov(e, 0);
		draw_fov(e, 1);
	}
	expose_hook(e);
}
