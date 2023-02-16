/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:33:23 by jole              #+#    #+#             */
/*   Updated: 2023/02/16 20:54:31 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_b(t_struct *a, t_struct *b, int distance)
{
	while (distance)
	{
		rb(b);
		distance--;
	}
	pa(a, b);
}

void	rrotate_b(t_struct *a, t_struct *b, int distance)
{
	while (distance)
	{
		rrb(b);
		distance--;
	}
	pa(a, b);
}
