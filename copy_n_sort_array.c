/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_n_sort_array.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:52:59 by jole              #+#    #+#             */
/*   Updated: 2023/02/16 17:42:44 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_array(t_struct *stack)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (j < stack->size)
	{
		while (i < stack->size)
		{
			if (stack->ptr[i] > stack->ptr[j])
			{
				tmp = stack->ptr[j];
				stack->ptr[j] = stack->ptr[i];
				stack->ptr[i] = tmp;
			}
			i++;
		}
		i = 0;
		j++;
	}
}

void	copy_stack(t_struct *a, t_struct *c)
{
	int	i;

	i = 0;
	while (i < a->size)
	{
		c->ptr[i] = a->ptr[i];
		i++;
	}
	c->size = a->size;
	sort_array(c);
}
