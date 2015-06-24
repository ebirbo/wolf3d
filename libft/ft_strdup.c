/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebirbo <ebirbo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 19:19:34 by ebirbo            #+#    #+#             */
/*   Updated: 2015/04/03 19:19:35 by ebirbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(const char *s1)
{
	char		*s2;
	size_t		len;

	len = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(char *) * len);
	if (s2 == NULL)
		return (s2);
	len = 0;
	while ('\0' != s1[len])
	{
		s2[len] = s1[len];
		len++;
	}
	s2[len] = '\0';
	return (s2);
}
