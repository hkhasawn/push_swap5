/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhasawn <hkhasawn@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 17:31:05 by hkhasawn          #+#    #+#             */
/*   Updated: 2026/02/24 17:55:02 by hkhasawn         ###   ########.fr       */
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
