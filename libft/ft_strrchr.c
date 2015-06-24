/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebirbo <ebirbo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 19:23:08 by ebirbo            #+#    #+#             */
/*   Updated: 2015/04/03 19:23:09 by ebirbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*temp_s;

	temp_s = s;
	temp_s = temp_s + ft_strlen(s);
	while (*temp_s != (char)c && temp_s != s)
		temp_s--;
	if (*temp_s == (char)c)
		return ((char *)temp_s);
	return (NULL);
}
