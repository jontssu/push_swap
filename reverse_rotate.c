/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:56:15 by jole              #+#    #+#             */
/*   Updated: 2023/02/21 18:46:10 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_struct *a)
{
	reverse_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_struct *b)
{
	reverse_rotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_struct *a, t_struct *b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rrr\n");
}

void	reverse_rotate(t_struct *stack)
{
	int	i;
	int	bottom;

	i = 0;
	bottom = stack->ptr[0];
	while (i < stack->size - 1)
	{
		stack->ptr[i] = stack->ptr[i + 1];
		i++;
	}
	stack->ptr[i] = bottom;
}
