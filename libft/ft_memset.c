/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebirbo <ebirbo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 19:15:09 by ebirbo            #+#    #+#             */
/*   Updated: 2015/04/03 19:15:10 by ebirbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp_b;

	tmp_b = (unsigned char*)b;
	while (len && tmp_b)
	{
		*tmp_b = c;
		tmp_b++;
		len--;
	}
	return (b);
}
