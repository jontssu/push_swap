/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_smalls.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:15:56 by jole              #+#    #+#             */
/*   Updated: 2023/02/15 20:15:19 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_smalls(t_struct *a, t_struct *b, t_struct *c)
{
	int	i;
	int	count;

	i = 0;
	count = a->size;
	while (i < count)
	{
		if (a->ptr[a->size - 1] < c->ptr[c->max_size - 2])
			pb(a, b);
		else
			ra(a);
		i++;
	}
}

void	sort_a_top(t_struct *a)
{
	if (a->ptr[a->size - 1] > a->ptr[a->size - 2])
		sa(a);
}
