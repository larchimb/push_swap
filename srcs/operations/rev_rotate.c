/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 14:06:25 by elbarry           #+#    #+#             */
/*   Updated: 2026/01/06 18:04:35 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	reverse_rotate_stack(t_stack *s)
{
    t_node	*prev;
    t_node	*last;

    if (s->size < 2)
        return;

    prev = NULL;
    last = s->top;

    while (last->next)
    {
        prev = last;
        last = last->next;
    }

    prev->next = NULL;
    last->next = s->top;
    s->top = last;
}


void	rra(t_ps *ps)
{
	reverse_rotate_stack(&ps->stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_ps *ps)
{
	reverse_rotate_stack(&ps->stack_a);
	write(1, "rrb\n", 4);
}

void	rrr(t_ps *ps)
{
	reverse_rotate_stack(&ps->stack_a);
	reverse_rotate_stack(&ps->stack_b);
	write(1, "rrr\n", 4);
}