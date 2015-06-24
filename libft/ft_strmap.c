/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebirbo <ebirbo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 19:21:37 by ebirbo            #+#    #+#             */
/*   Updated: 2015/04/03 19:21:38 by ebirbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_str;
	int		i;

	i = 0;
	if (!s || !f)
		return (0);
	new_str = ft_strnew(ft_strlen(s));
	if (!new_str)
		return (NULL);
	while (*(s + i))
	{
		*(new_str + i) = f(*(s + i));
		i++;
	}
	return (new_str);
}
