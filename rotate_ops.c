/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ops.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhasawn <hkhasawn@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 18:03:19 by hkhasawn          #+#    #+#             */
/*   Updated: 2026/02/24 18:30:48 by hkhasawn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *a)
{
	if (!a || a -> size < 2)
		return;
	rotate_stack(a);
	write (1 , "ra\n" , 3);
}

void    rb(t_stack *b)
{
        if (!b || b -> size < 2)
                return;
        rotate_stack(b);
        write (1 , "rb\n" , 3);
}

void rr(t_stack *a, t_stack *b)
{
	 rotate_stack(a);
	 rotate_stack(b);
	 write (1 , "rr\n" , 3);
}
