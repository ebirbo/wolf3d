/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebirbo <ebirbo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 19:13:01 by ebirbo            #+#    #+#             */
/*   Updated: 2015/04/03 19:13:02 by ebirbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*tmp_d;
	char	*tmp_s;
	char	car;

	car = (char)c;
	tmp_s = (char*)src;
	tmp_d = (char*)dest;
	while (n != 0 && *tmp_s != car)
	{
		*tmp_d = *tmp_s;
		tmp_d++;
		tmp_s++;
		n--;
	}
	if (*tmp_s == car)
	{
		*tmp_d = *tmp_s;
		return ((void*)++tmp_d);
	}
	return (NULL);
}
