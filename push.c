/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:21:33 by jole              #+#    #+#             */
/*   Updated: 2023/02/20 18:04:27 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_struct *a, t_struct *b)
{
	if (b->size >= 1)
	{
		a->ptr[a->size] = b->ptr[b->size - 1];
		b->size--;
		a->size++;
	}
	ft_printf("pa\n");
}

void	pb(t_struct *a, t_struct *b)
{
	if (a->size >= 1)
	{
		b->ptr[b->size] = a->ptr[a->size - 1];
		a->size--;
		b->size++;
	}
	ft_printf("pb\n");
}
