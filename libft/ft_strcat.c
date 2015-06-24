/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebirbo <ebirbo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 19:20:38 by ebirbo            #+#    #+#             */
/*   Updated: 2015/04/03 19:21:05 by ebirbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*swap;

	swap = dest;
	while (*swap)
		swap++;
	while (*src)
	{
		*swap = *src;
		swap++;
		src++;
	}
	*swap = '\0';
	return (dest);
}
