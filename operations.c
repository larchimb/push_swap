/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:38:45 by elbarry           #+#    #+#             */
/*   Updated: 2026/01/05 18:05:21 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_ps *ps)
{
	t_node	*first;
	t_node	*second;
	
	if (ps->stack_a.size < 2)
		return ;
	first = ps->stack_a.top;
	second = first->next;

	first->next = second->next;
	second->next = first;
	ps->stack_a.top = second;
}

void	sb(t_ps *ps)
{
	t_node	*first;
	t_node	*second;
	
	if (ps->stack_b.size < 2)
		return ;
	first = ps->stack_b.top;
	second = first->next;

	first->next = second->next;
	second->next = first;
	ps->stack_b.top = second;
}