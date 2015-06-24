/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebirbo <ebirbo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 19:10:47 by ebirbo            #+#    #+#             */
/*   Updated: 2015/04/03 19:10:48 by ebirbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	length(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	size_t	len;
	char	*str;
	int		sign;

	if (n == -2147483647 - 1)
		return ("-2147483648");
	len = length(n);
	sign = 0;
	if (n < 0)
	{
		n = -n;
		sign = 42;
		len++;
	}
	str = ft_strnew(len);
	if (!str)
		return (0);
	str[--len] = n % 10 + '0';
	while (n /= 10)
		str[--len] = n % 10 + '0';
	if (sign)
		str[0] = '-';
	return (str);
}
