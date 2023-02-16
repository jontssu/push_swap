/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:56:20 by jole              #+#    #+#             */
/*   Updated: 2023/02/16 18:25:12 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_struct *a)
{
	rotate(a);
	ft_printf("ra\n");
}

void	rb(t_struct *b)
{
	rotate(b);
	ft_printf("rb\n");
}

void	rr(t_struct *a, t_struct *b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}

void	rotate(t_struct *stack)
{
	int	top;
	int	i;

	i = 1;
	top = stack->ptr[stack->size - 1];
	while (i < stack->size)
	{
		stack->ptr[stack->size - i] = stack->ptr[stack->size - i - 1]; 
		i++;
	}
	stack->ptr[0] = top;
}
