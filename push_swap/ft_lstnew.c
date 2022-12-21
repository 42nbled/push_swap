/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbled <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 01:35:00 by nbled             #+#    #+#             */
/*   Updated: 2022/09/20 01:35:16 by nbled            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pile	*ft_lstnew(int value, int index)
{
	t_pile	*n;

	n = malloc(sizeof(t_pile));
	if (!n)
		return (NULL);
	n->value = value;
	n->index = index;
	n->next = NULL;
	return (n);
}
