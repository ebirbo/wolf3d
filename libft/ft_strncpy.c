/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebirbo <ebirbo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 19:22:20 by ebirbo            #+#    #+#             */
/*   Updated: 2015/04/03 19:22:21 by ebirbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strncpy(char *s1, const char *s2, size_t n)
{
	char			*fill;

	fill = s1;
	while (n > 0 && *s2 != '\0')
	{
		*fill++ = *s2++;
		--n;
	}
	while (n > 0)
	{
		*fill++ = '\0';
		--n;
	}
	return (s1);
}
