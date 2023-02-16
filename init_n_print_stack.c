/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_n_print_stack.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:18:18 by jole              #+#    #+#             */
/*   Updated: 2023/02/16 17:43:58 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_first_stack(t_struct *stack, int count, char **argv)
{
	int	i;

	i = 0;
	while (count)
	{
		stack->ptr[count - 1] = ft_atoi(argv[i + 1]);
		count--;
		i++;
		stack->size++;
	}
}

void	print_stack(t_struct *stack)
{
	int	i;

	i = 0;
	ft_printf("stack:\n");
	while (i < stack->size)
	{
		ft_printf("%d\n", stack->ptr[stack->size - 1 - i]);
		i++;
	}
}
