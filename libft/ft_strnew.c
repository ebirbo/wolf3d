/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebirbo <ebirbo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 19:22:48 by ebirbo            #+#    #+#             */
/*   Updated: 2015/04/03 19:22:49 by ebirbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (size == SIZE_MAX)
		return (0);
	ptr = (char*)malloc(sizeof(char) * (size + 1));
	if (!ptr)
		return (NULL);
	while (i <= size)
	{
		*(ptr + i) = '\0';
		i++;
	}
	return (ptr);
}
