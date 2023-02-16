/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:24:25 by jole              #+#    #+#             */
/*   Updated: 2023/02/16 21:49:17 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_struct	a;
	t_struct	b;
	t_struct	c;
	t_struct	d;

	init_vars(&a, (argc - 1));
	init_vars(&b, (argc - 1));
	init_vars(&c, (argc - 1));
	init_vars(&d, (argc - 1));
	init_first_stack(&a, argc - 1, argv);
	init_first_stack(&d, argc - 1, argv);
	if (a.size <= 3)
	{
		sort_a_top(&a);
		exit(1);
	}
	sort_array(&d);
	while (a.size > 3)
		push_smalls(&a, &b, &c);
	sort_a_top(&a);
	sort_from_b(&a, &b, &d);
	//ft_printf("\nend------------------\n");
	//print_stack(&a);
	//print_stack(&b);
	return (0);
}
