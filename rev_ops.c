/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_ops.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhasawn <hkhasawn@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 18:04:52 by hkhasawn          #+#    #+#             */
/*   Updated: 2026/02/25 18:05:12 by hkhasawn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	rra(t_stack *a)
{
	rrotate_stack(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	rrotate_stack(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b)
{
	rrotate_stack(a);
	rrotate_stack(b);
	write(1, "rrr\n", 4);
}
