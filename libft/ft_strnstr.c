/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebirbo <ebirbo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 19:22:58 by ebirbo            #+#    #+#             */
/*   Updated: 2015/04/03 19:22:59 by ebirbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char		c;
	char		sc;
	size_t		len;
	int			i;

	i = 0;
	if ((c = *s2++) != '\0')
	{
		len = ft_strlen(s2);
		while (!i || ft_strncmp(s1, s2, len) != 0)
		{
			i = 1;
			if ((sc = *s1++) == '\0' || n-- < 1)
				return (NULL);
			while (sc != c)
			{
				if ((sc = *s1++) == '\0' || n-- < 1)
					return (NULL);
			}
			if (len > n)
				return (NULL);
		}
		s1--;
	}
	return ((char *)s1);
}
