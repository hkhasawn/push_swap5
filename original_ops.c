/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   original_ops.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhasawn <hkhasawn@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 17:31:05 by hkhasawn          #+#    #+#             */
/*   Updated: 2026/02/25 18:07:18 by hkhasawn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_stack(t_stack *stack)
{
	t_node	*first;
	t_node	*second;

	if (!stack || stack->size < 2)
		return ;
	first = stack->top;
	second = first->next;
	first->next = second->next;
	second->next = first;
	stack->top = second;
	if (stack->size == 2)
		stack->tail = first;
}

void	push_stack(t_stack *from, t_stack *to)
{
	t_node	*node;

	if (!from || !to || from->size == 0)
		return ;
	node = from->top;
	from->top = node->next;
	if (from->top == NULL)
		from->tail = NULL;
	from->size--;
	node->next = to->top;
	to->top = node;
	if (to->size == 0)
		to->tail = node;
	to->size++;
}

void	rotate_stack(t_stack *stack)
{
	t_node	*first;

	if (!stack || stack->size < 2)
		return ;
	first = stack->top;
	stack->top = first->next;
	stack->tail->next = first;
	stack->tail = first;
	first->next = NULL;
}

void	rrotate_stack(t_stack *stack)
{
	t_node	*prev;
	t_node	*last;

	if (!stack || stack->size < 2)
		return ;
	last = stack->tail;
	prev = stack->top;
	while (prev->next != stack->tail)
		prev = prev->next;
	prev->next = NULL;
	stack->tail = prev;
	last->next = stack->top;
	stack->top = last;
}
