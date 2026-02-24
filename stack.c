/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhasawn <hkhasawn@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 00:32:59 by hkhasawn          #+#    #+#             */
/*   Updated: 2026/02/24 01:45:46 by hkhasawn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	init_stack(t_stack *stack)
{
	stack->top = NULL;
	stack->tail = NULL;
	stack->size = 0;
}

t_node	*new_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		printerror();
	node->value = value;
	node->index = 0;
	node->next = NULL;
	return (node);
}

void	add_back(t_stack *stack, t_node *node)
{
	if (!stack->top)
	{
		stack->top = node;
		stack->tail = node;
	}
	else
	{
		stack->tail->next = node;
		stack->tail = node;
	}
	node->next = NULL;
	stack->size++;
}

void	free_stack(t_stack *stack)
{
	t_node	*cur;
	t_node	*tmp;

	if (!stack)
		return ;
	cur = stack->top;
	while (cur)
	{
		tmp = cur->next;
		free(cur);
		cur = tmp;
	}
	stack->top = NULL;
	stack->tail = NULL;
	stack->size = 0;
}
