/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 16:21:45 by elbarry           #+#    #+#             */
/*   Updated: 2026/01/06 16:42:40 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	push_stack(t_stack *from, t_stack *to)
{
	t_node	*tmp;

	if (from->size == 0)
		return ;
	
	tmp = from->top;
	from->top = tmp->next;

	tmp->next = to->top;
	to->top = tmp;
	
	from->size--;
	to->size++;
}

void	pa(t_ps *ps)
{
	push_stack(&ps->stack_b, &ps->stack_a);
	write(1, "pa\n", 3);
}

void	pb(t_ps *ps)
{
	push_stack(&ps->stack_a, &ps->stack_b);
	write(1, "pb\n", 3);
}