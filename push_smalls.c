/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_smalls.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:15:56 by jole              #+#    #+#             */
/*   Updated: 2023/02/21 21:57:13 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_smalls(t_struct *a, t_struct *b, t_struct *c)
{
	int	i;
	int	count;

	i = 0;
	count = a->size;
	copy_stack(a, c);
	while (i < count)
	{
		if (a->ptr[a->size - 1] < c->ptr[c->size / 2])
		{
			pb(a, b);
			if (b->size > 1 && b->ptr[b->size - 1] < c->ptr[c->size / 4])
				rb(b);
		}
		else
			ra(a);
		i++;
	}
}

void	sort_a_top(t_struct *a, int flag)
{
	if (a->size == 2)
	{
		if (a->ptr[1] > a->ptr[0])
			sa(a);
	}
	else
	{
		if (a->ptr[2] > a->ptr[0] && a->ptr[2] > a->ptr[1])
			ra(a);
		else if (a->ptr[1] > a->ptr[2] && a->ptr[1] > a->ptr[0])
			rra(a);
		if (a->ptr[2] > a->ptr[1])
			sa(a);
	}
	if (flag == 1)
		exit (1);
}
