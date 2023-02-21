/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_vars.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:38:55 by jole              #+#    #+#             */
/*   Updated: 2023/02/21 17:11:33 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_vars(t_struct *stack, t_struct *stack_two, int size)
{
	stack->size = 0;
	stack->max_size = size;
	stack->ptr = malloc(size * sizeof(int));
	stack_two->size = 0;
	stack_two->max_size = size;
	stack_two->ptr = malloc(size * sizeof(int));
}

int	count_size(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		i++;
	return (i);
}
