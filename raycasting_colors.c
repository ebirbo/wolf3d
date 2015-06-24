/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycasting_colors.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebirbo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/08 18:02:06 by ebirbo            #+#    #+#             */
/*   Updated: 2015/06/08 18:02:08 by ebirbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void select_color_and_draw(t_env *e)
{
	if (e->side == 1 && e->raydiry > 0)
		e->color = 0xFF0000;
	if (e->side == 1 && e->raydiry <= 0)
		e->color = 0xFF00FF;
	if (e->side == 0 && e->raydirx > 0)
		e->color = 0x00FF00;
	if (e->side == 0 && e->raydirx <= 0)
		e->color = 0x0000FF;
	if (e->worldmap[e->mapx][e->mapy] == 2 && e->side == 1)
		e->color = 0x202020;
	while (e->drawstart < e->drawend)
	{
		mlx_put_pixel_to_img(e, e->x, e->drawstart, e->color);
		e->drawstart += 1;
	}
}
