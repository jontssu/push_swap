/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:00:30 by jole              #+#    #+#             */
/*   Updated: 2023/03/09 20:03:17 by jole             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <stdlib.h>

typedef struct s_struct
{
	int	size;
	int	*ptr;
	int	max_size;
}				t_struct;

typedef struct s_pointers
{
	t_struct	*a;
	t_struct	*b;
	t_struct	*c;
	t_struct	*d;
}				t_pointers;

void	print_array(t_struct *stack);

int		init(t_pointers	*pointers, char **argv);
int		init_vars(t_pointers *pointers, int size);
void	free_exit(t_pointers *pointers);
int		count_size(char **split);
int		init_stack_quotes(t_struct *stack, t_struct *stack_two, char **split);
int		init_stack(t_struct *stack, t_struct *stack_two, \
		int count, char **argv);
int		check_argument(char *str);
void	copy_stack(t_struct *stack, t_struct *stack_two);
void	sort_array(t_struct *stack);
void	checks_before_push(t_pointers *pointers);
int		is_sorted(t_struct *a, t_struct *d);
void	sa(t_struct *a);
void	sb(t_struct *b);
void	ss(t_struct *a, t_struct *b);
void	swap(t_struct *stack);
void	pa(t_struct *a, t_struct *b);
void	pb(t_struct *a, t_struct *b);
void	push(t_struct *to, t_struct *from);
void	ra(t_struct *a);
void	rb(t_struct *b);
void	rr(t_struct *a, t_struct *b);
void	rotate(t_struct *stack);
void	rra(t_struct *a);
void	rrb(t_struct *b);
void	rrr(t_struct *a, t_struct *b);
void	reverse_rotate(t_struct *stack);
void	push_smalls(t_struct *a, t_struct *b, t_struct *c);
void	sort_a_top(t_struct *a);
void	sort_from_b(t_struct *a, t_struct *b, t_struct *c, t_struct *d);
int		find_distance(t_struct *stack, int nb);
int		find_from_top(t_struct *stack, int nb);
void	push_second(t_struct *a, t_struct *b, t_struct *d, int distance);
void	push_distance(t_struct *a, t_struct *b, int distance);
void	rotate_b(t_struct *a, t_struct *b, int distance);
void	rrotate_b(t_struct *a, t_struct *b, int distance);
void	print_stack(t_struct *a);

#endif
