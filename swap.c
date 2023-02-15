/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:13:00 by jole              #+#    #+#             */
/*   Updated: 2023/02/15 16:21:29 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_struct *a)
{
	swap(a);
	ft_printf("sa\n");
}

void	sb(t_struct *b)
{
	swap(b);
	ft_printf("sb\n");
}

void	ss(t_struct *a, t_struct *b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}

void	swap(t_struct *stack)
{
	int	tmp;

	if (stack->size >= 2)
	{
		tmp = stack->ptr[stack->size - 1];
		stack->ptr[stack->size - 1] = stack->ptr[stack->size - 2];
		stack->ptr[stack->size - 2] = tmp;
	}
}
