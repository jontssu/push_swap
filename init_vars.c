/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_vars.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:38:55 by jole              #+#    #+#             */
/*   Updated: 2023/03/09 19:33:09 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	init_vars(t_pointers *pointers, int size)
{
	ft_bzero(pointers->a, sizeof(t_struct));
	ft_bzero(pointers->b, sizeof(t_struct));
	ft_bzero(pointers->c, sizeof(t_struct));
	ft_bzero(pointers->d, sizeof(t_struct));
	pointers->a->max_size = size;
	pointers->a->ptr = malloc(size * sizeof(int));
	if (!pointers->a->ptr)
		return (-1);
	pointers->b->max_size = size;
	pointers->b->ptr = malloc(size * sizeof(int));
	if (!pointers->b->ptr)
		return (-1);
	pointers->c->max_size = size;
	pointers->c->ptr = malloc(size * sizeof(int));
	if (!pointers->c->ptr)
		return (-1);
	pointers->d->max_size = size;
	pointers->d->ptr = malloc(size * sizeof(int));
	if (!pointers->d->ptr)
		return (-1);
	return (0);
}

int	count_size(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		i++;
	return (i);
}
