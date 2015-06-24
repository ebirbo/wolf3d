/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebirbo <ebirbo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 19:24:28 by ebirbo            #+#    #+#             */
/*   Updated: 2015/04/03 19:24:30 by ebirbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char		*new_str;
	size_t		i;
	size_t		len;

	if (!s)
		return (0);
	len = ft_strlen(s) - 1;
	i = 0;
	while (ft_isspace(s[i]) && s[i])
		i++;
	if (!s[i])
		return (ft_strnew(1));
	while (len != i && ft_isspace(s[len]))
		len--;
	if (!i && len == ft_strlen(s) - 1)
	{
		new_str = ft_strsub(s, 0, ft_strlen(s));
		return (new_str);
	}
	new_str = ft_strsub(s, i, len - i + 1);
	if (!new_str)
		return (NULL);
	return (new_str);
}
