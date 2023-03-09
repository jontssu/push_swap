/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:24:25 by jole              #+#    #+#             */
/*   Updated: 2023/03/09 19:38:01 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_exit(t_pointers *pointers)
{
	if (pointers->a->ptr)
		free(pointers->a->ptr);
	if (pointers->b->ptr)
		free(pointers->b->ptr);
	if (pointers->c->ptr)
		free(pointers->c->ptr);
	if (pointers->d->ptr)
		free(pointers->d->ptr);
	exit(-1);
}

int	init(t_pointers *pointers, char **argv)
{
	char	**split;
	int		i;

	i = 0;
	split = ft_split(argv[1], ' ');
	if (init_vars(pointers, count_size(split)))
	{
		while (split[i])
			free(split[i++]);
		free(split);
		free_exit(pointers);
	}
	if (init_stack_quotes(pointers->a, pointers->d, split))
	{
		while (split[i])
			free(split[i++]);
		free(split);
		free_exit(pointers);
	}
	while (split[i])
		free(split[i++]);
	free(split);
	return (0);
}

int	main(int argc, char **argv)
{
	t_struct	a;
	t_struct	b;
	t_struct	c;
	t_struct	d;
	t_pointers	pointers;

	if (argc < 2)
		return (0);
	pointers.a = &a;
	pointers.b = &b;
	pointers.c = &c;
	pointers.d = &d;
	if (argc == 2)
	{
		if (init(&pointers, argv))
			return (-1);
	}
	else
	{
		if (init_vars(&pointers, argc - 1) || \
				init_stack(&a, &d, argc - 1, argv))
			free_exit(&pointers);
	}
	checks_before_push(&pointers);
	return (0);
}
