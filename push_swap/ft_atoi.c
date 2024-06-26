/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbled <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 17:10:41 by nbled             #+#    #+#             */
/*   Updated: 2022/03/23 21:32:35 by nbled            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(char *str)
{
	int	a;
	int	p;
	int	i;

	a = 0;
	p = 0;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			p++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		a *= 10;
		a += str[i] - 48;
		i++;
	}
	p %= 2;
	if (p == 1)
		a *= -1;
	return (a);
}
