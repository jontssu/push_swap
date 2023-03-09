/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_n_sort_array.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:52:59 by jole              #+#    #+#             */
/*   Updated: 2023/03/09 20:06:23 by jole             ###   ########.fr       */
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

void	copy_stack(t_struct *stack, t_struct *stack_two)
{
	int	i;

	i = 0;
	while (i < stack->size)
	{
		stack_two->ptr[i] = stack->ptr[i];
		i++;
	}
	stack_two->size = stack->size;
	sort_array(stack_two);
}

void	checks_before_push(t_pointers *pointers)
{
	int	i;

	i = 0;
	while (pointers->d->ptr[i])
	{
		if (pointers->d->ptr[i] == pointers->d->ptr[i + 1])
		{
			write(2, "Error\n", 6);
			free_exit(pointers);
		}
		i++;
	}
	if (is_sorted(pointers->a, pointers->d))
		free_exit(pointers);
	if (pointers->a->size <= 3)
	{
		sort_a_top(pointers->a);
		free_exit(pointers);
	}
	sort_from_b(pointers->a, pointers->b, pointers->c, pointers->d);
	free_exit(pointers);
}

int	is_sorted(t_struct *a, t_struct *d)
{
	int	i;

	i = 0;
	while (i < a->size)
	{
		if (a->ptr[i] != d->ptr[a->size - i - 1])
			break ;
		i++;
	}
	if (i == a->size)
		return (-1);
	return (0);
}
