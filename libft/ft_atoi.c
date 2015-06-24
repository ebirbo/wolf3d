/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebirbo <ebirbo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/03 19:07:16 by ebirbo            #+#    #+#             */
/*   Updated: 2015/04/03 19:07:18 by ebirbo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		sign;
	int		num;

	sign = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		sign = 42;
	if (*str == '-' || *str == '+')
		str++;
	num = 0;
	while (*str && ft_isdigit(*str))
	{
		num = num * 10 + *str - '0';
		str++;
	}
	if (sign)
		num = -num;
	return (num);
}
