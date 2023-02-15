/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_vars.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:38:55 by jole              #+#    #+#             */
/*   Updated: 2023/02/15 19:53:40 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_vars(t_struct *stack, int size)
{
	stack->size = 0;
	stack->max_size = size;
	stack->ptr = malloc(size * sizeof(int));
}
