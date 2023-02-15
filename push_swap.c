/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:24:25 by jole              #+#    #+#             */
/*   Updated: 2023/02/15 20:23:24 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_struct	a;
	t_struct	b;
	t_struct	c;

	init_vars(&a, (argc - 1));
	init_vars(&b, (argc - 1));
	init_vars(&c, (argc - 1));
	init_first_stack(&a, argc - 1, argv);
	init_first_stack(&c, argc - 1, argv);
	sort_array(&c);
	push_smalls(&a, &b, &c);
	print_stack(&a);
	print_stack(&b);
	print_stack(&c);
	return (0);
}
