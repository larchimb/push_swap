/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:38:45 by elbarry           #+#    #+#             */
/*   Updated: 2026/01/06 17:28:23 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void    swap_stack(t_stack *s)
{
    t_node *first;
    t_node *second;

    if (s->size < 2)
        return;

    first = s->top;
    second = first->next;

    first->next = second->next;
    if (second->next)
        second->next->prev = first;

    second->prev = NULL;
    second->next = first;
    first->prev = second;

    s->top = second;
}


void	swap_stack(t_stack *s)
{
	t_node	*first;
	t_node	*second;
	
	if (s->size < 2)
		return ;
	first = s->top;
	second = first->next;

	first->next = second->next;
	second->next = first;
	s->top = second;
}

void	sa(t_ps *ps)
{
	swap_stack(&ps->stack_a);
	write(1, "sa\n", 3);
}

void	sb(t_ps *ps)
{
	swap_stack(&ps->stack_b);
	write(1, "sb\n", 3);
}

void	ss(t_ps *ps)
{
	swap_stack(&ps->stack_a);
	swap_stack(&ps->stack_b);
	write(1, "ss\n", 3);
}