/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhasawn <hkhasawn@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 16:49:16 by hkhasawn          #+#    #+#             */
/*   Updated: 2026/02/24 17:08:13 by hkhasawn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_index(t_stack *a)
{
	t_node	*cur;
	t_node	*tmp;
	int		count;

	if (!a)
		return ;
	cur = a->top;
	while (cur)
	{
		count = 0;
		tmp = a->top;
		while (tmp)
		{
			if (tmp->value < cur->value)
				count++;
			tmp = tmp->next;
		}
		cur->index = count;
		cur = cur->next;
	}
}
