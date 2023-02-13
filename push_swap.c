/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:24:25 by jole              #+#    #+#             */
/*   Updated: 2023/02/13 18:14:09 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	*a;
	int	*b;
	int	i;

	i = 0;
	a = malloc((argc - 1) * sizeof(int));
	b = malloc((argc - 1) * sizeof(int));
	while (i - (argc - 1))
	{
		a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	return (0);
}
