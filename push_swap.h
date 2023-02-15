/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jole <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:00:30 by jole              #+#    #+#             */
/*   Updated: 2023/02/15 20:12:19 by jole             ###   ########.fr       */
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

void	init_vars(t_struct *stack, int size);
void	init_first_stack(t_struct *a, int count, char **argv);
void	sort_array(t_struct *stack);
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
void	print_stack(t_struct *a);

#endif
