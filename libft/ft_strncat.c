/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebirbo <ebirbo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 19:21:56 by ebirbo            #+#    #+#             */
/*   Updated: 2015/04/03 19:21:56 by ebirbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*swap;

	swap = dest;
	while (*swap)
		swap++;
	while (*src && (n > 0))
	{
		*swap = *src;
		swap++;
		src++;
		n--;
	}
	*swap = '\0';
	return (dest);
}
