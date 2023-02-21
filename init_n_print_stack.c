/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_n_print_stack.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:18:18 by jole              #+#    #+#             */
/*   Updated: 2023/02/21 21:33:59 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

void	init_stack(t_struct *stack, t_struct *stack_two, int count, char **argv)
{
	int	i;

	i = 0;
	while (count)
	{
		if (check_valid_argument(argv[i + 1]) == -1 || ft_strlen(argv[i + 1]) == 0)
		{
			write(2, "Error\n", 6);
			exit(-1);
		}
		stack->ptr[count - 1] = ft_atoi(argv[i + 1]);
		count--;
		i++;
		stack->size++;
	}
	count = i;
	i = 0;
	while (count)
	{
		stack_two->ptr[count - 1] = ft_atoi(argv[i + 1]);
		count--;
		i++;
		stack_two->size++;
	}
}

void	init_stack_quotes(t_struct *stack, t_struct *stack_two, char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		if (check_valid_argument(split[i]) == -1 || ft_strlen(split[i]) == 0)
		{
			write(2, "Error\n", 6);
			exit(-1);
		}
		stack->ptr[stack->max_size - i - 1] = ft_atoi(split[i]);
		i++;
		stack->size++;
	}
	i = 0;
	while (split[i])
	{
		stack_two->ptr[stack->max_size - i - 1] = ft_atoi(split[i]);
		i++;
		stack_two->size++;
	}
}

int	check_valid_argument(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
		if (!ft_isdigit(str[i++]))
			return (-1);
	i = ft_strlen(str);
	if (str[0] == '-' || str[0] == '+')
		i--;
	if (i > 10)
		return (-1);
	else if (i < 10)
		return (0);
	if (str[0] == '+')
		str++;
	if (str[0] == '-' && ft_strncmp(str + 1, "2147483648", 10) > 0)
			return (-1);
	else if (ft_strncmp(str, "2147483647", 10) > 0)
			return (-1);
	return (0);
}

void	print_stack(t_struct *stack)
{
	int	i;

	i = 0;
	ft_printf("stack:\n");
	while (i < stack->size)
	{
		ft_printf("%d\n", stack->ptr[stack->size - 1 - i]);
		i++;
	}
}
