/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_from_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:06:39 by jole              #+#    #+#             */
/*   Updated: 2023/02/20 18:17:27 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_from_b(t_struct *a, t_struct *b, t_struct *d)
{
	int	first;
	int	second;

	while (b->size > 1)
	{
		first = find_distance(b, d->ptr[d->max_size - a->size - 1]);
		second = find_distance(b, d->ptr[d->max_size - a->size - 2]);
		if (second < first)
		{
			push_distance(a, b, find_from_top(b, \
						d->ptr[d->max_size - a->size - 2]));
			push_distance(a, b, find_from_top(b, \
						d->ptr[d->max_size - a->size]));
			sa(a);
		}
		else
		{
			push_distance(a, b, find_from_top(b, \
						d->ptr[d->max_size - a->size - 1]));
		}
	}
	pa(a, b);
}

int	find_distance(t_struct *stack, int nb)
{
	int	i;

	i = 0;
	while (stack->ptr[stack->size - i - 1] != nb)
		i++;
	if (i > (stack->size - i))
		return (stack->size - i);
	return (i);
}

int	find_from_top(t_struct *stack, int nb)
{
	int	i;

	i = 0;
	while (stack->ptr[stack->size - i - 1] != nb)
		i++;
	return (i);
}

void	push_distance(t_struct *a, t_struct *b, int distance)
{
	if (distance < (b->size / 2))
		rotate_b(a, b, distance);
	else
		rrotate_b(a, b, b->size - distance);
}
