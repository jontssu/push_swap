/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:24:25 by jole              #+#    #+#             */
/*   Updated: 2023/02/21 21:57:42 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// delete print_stack // if already sorted

int	main(int argc, char **argv)
{
	t_struct	a;
	t_struct	b;
	t_struct	c;
	t_struct	d;
	char	**split;

	if (argc < 2)
		return (0);
	if (argc == 2)
	{
		split = ft_split(argv[1], ' ');
		init_vars(&a, &b, count_size(split));
		init_vars(&c, &d, count_size(split));
		init_stack_quotes(&a, &d, split);
	}
	else
	{
		init_vars(&a, &b, argc - 1);
		init_vars(&c, &d, argc - 1);
		init_stack(&a, &d, argc - 1, argv);
	}
	sort_array(&d);
	check_for_duplicates(&d);
	if (a.size <= 3)
		sort_a_top(&a, 1);
	while (a.size > 3)
		push_smalls(&a, &b, &c);
	sort_a_top(&a, 0);
	sort_from_b(&a, &b, &d);
	//ft_printf("---------------end\n");
	//print_stack(&a);
	//print_stack(&b);
	return (0);
}
