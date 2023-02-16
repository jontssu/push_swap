/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_smalls.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:15:56 by jole              #+#    #+#             */
/*   Updated: 2023/02/16 20:54:58 by jole             ###   ########.fr       */
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

void	sort_a_top(t_struct *a)
{
	if (a->size == 2)
	{
		if (a->ptr[1] > a->ptr[0])
			sa(a);
	}
	else
	{
		if (a->ptr[2] > a->ptr[0] && a->ptr[2] > a->ptr[1])
		{
			ra(a);
			if (a->ptr[2] > a->ptr[1])
				sa(a);
		}
		else if (a->ptr[1] > a->ptr[2] && a->ptr[1] > a->ptr[0])
		{
			rra(a);
			if (a->ptr[2] > a->ptr[1])
				sa(a);
		}
		else
			if (a->ptr[2] > a->ptr[1])
				sa(a);
	}
}

void	sort_from_b(t_struct *a, t_struct *b, t_struct *d)
{
	int	i;
	int distance;

	i = 0;
	while (b->size)
	{
		while (i < b->size)
		{
			if (b->ptr[b->size - i - 1] == d->ptr[d->max_size - a->size - 1]) 
				// || b->ptr[i] == d->ptr[d->max_size - a->size - 2])
			{
				distance = i;
				break;
			}
			i++;
		}
		if (distance < (b->size / 2))
			rotate_b(a, b, distance);
		else
			rrotate_b(a, b, b->size - distance);
		i = 0;
	}
}
