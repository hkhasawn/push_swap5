/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhasawn <hkhasawn@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 17:11:59 by hkhasawn          #+#    #+#             */
/*   Updated: 2026/02/23 18:09:04 by hkhasawn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}					t_node;

typedef struct s_stack
{
	t_node			*top;
	t_node			*tail;
	int				size;
}					t_stack;

typedef enum s_strategy
{
	Simple,
	Medium,
	Complex,
	Adaptive
}		t_strategy;
