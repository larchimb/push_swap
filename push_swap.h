/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elbarry <elbarry@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:26:03 by elbarry           #+#    #+#             */
/*   Updated: 2026/01/05 18:00:09 by elbarry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>

typedef struct s_node
{
	int		value;
	int		index;
	s_node	*next;
} t_node;

typedef struct s_stack
{
	t_node	*top;
	int		size;
} t_stack;



typedef struct s_push_swap
{
	t_stack stack_a;
	t_stack	stack_b;
} t_ps;


#endif