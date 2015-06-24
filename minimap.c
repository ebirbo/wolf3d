/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebirbo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/08 17:40:04 by ebirbo            #+#    #+#             */
/*   Updated: 2015/06/08 17:59:02 by ebirbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void			draw_fov(t_env *e, int which)
{
	int		len;
	float	x;
	float	y;

	if (which == 0)
		len = 2500;
	else
		len = 2000;
	x = (e->posx * 5) + 1;
	y = (e->posy * 5) + 1;
	while (len)
	{
		mlx_put_pixel_to_img(e, x, y, 0xCC0000);
		if (which == 0)
		{
			x += (e->dirx + 0.2) / 100;
			y += (e->diry + 0.2) / 100;
		}
		else
		{
			x += (e->dirx - 0.2) / 100;
			y += (e->diry - 0.2) / 100;
		}
		len--;
	}
}

static int		draw_map_extra(t_env *e, int color, int x, int y)
{
	int		leny;

	leny = 5;
	while (leny)
	{
		mlx_put_pixel_to_img(e, x, y, color);
		x++;
		leny--;
	}
	return (x);
}

void			draw_map(t_env *e, int x, int y, int which)
{
	int		color;
	int		lenx;

	lenx = 5;
	if (which == 0)
		color = 0x202020;
	else
		color = 0x006600;
	if (e->worldmap[x][y] > 0 || which == 1)
	{
		if (e->worldmap[x][y] == 2)
			color = 0x4C9900;
		x *= 5;
		y *= 5;
		while (lenx)
		{
			x = draw_map_extra(e, color, x, y);
			x -= 5;
			y++;
			lenx--;
		}
	}
}

void			mini_map(t_env *e)
{
	int		x;
	int		y;

	y = 0;
	x = 0;
	while (y < MAPWIDTH)
	{
		x = 0;
		while (x < MAPHEIGHT)
		{
			draw_map(e, x, y, 0);
			x++;
		}
		y++;
	}
}
