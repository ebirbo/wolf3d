/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebirbo <ebirbo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 19:13:29 by ebirbo            #+#    #+#             */
/*   Updated: 2015/04/03 19:13:30 by ebirbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*t1;
	const unsigned char		*t2;

	t1 = (const unsigned char*)s1;
	t2 = (const unsigned char*)s2;
	while (n)
	{
		if (*t1 != *t2)
			return (*(unsigned char*)t1 - *(unsigned char*)t2);
		n--;
		t1++;
		t2++;
	}
	return (0);
}
