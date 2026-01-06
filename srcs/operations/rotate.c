/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:06:37 by elbarry           #+#    #+#             */
/*   Updated: 2026/01/06 18:02:16 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	rotate_stack(t_stack *s)
{
	t_node	*first;
	t_node	*last;

	if (s->size < 2)
		return ;
	
	first = s->top;
	s->top = first->next;
	
	last = s->top;
	while (last->next)
		last = last->next;

	last->next = first;
	first->next =NULL;
}

void	ra(t_ps *ps)
{
	rotate_stack(&ps->stack_a);
	write(1, "ra\n", 3);
}

void	rb(t_ps *ps)
{
	rotate_stack(&ps->stack_b);
	write(1, "rb\n", 3);
}

void	rr(t_ps *ps)
{
	rotate_stack(&ps->stack_a);
	rotate_stack(&ps->stack_b);
	write(1, "rr\n", 3);
}