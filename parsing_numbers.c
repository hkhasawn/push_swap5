/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhasawn <hkhasawn@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 01:51:02 by hkhasawn          #+#    #+#             */
/*   Updated: 2026/02/24 16:46:38 by hkhasawn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	process_split(t_stack *a, char **split)
{
	int		j;
	int		tmp;
	t_node	*node;

	j = 0;
	while (split[j])
	{
		if (is_valid_number(split[j]))
		{
			tmp = ft_atoi(split[j]);
			node = new_node(tmp);
			add_back(a, node);
		}
		else
			printerror();
		free(split[j]);
		j++;
	}
	free(split);
}

void	parse_numbers(t_stack *a, int ac, char **av, int start)
{
	int		i;
	char	**split;

	if (!a)
		return ;
	init_stack(a);
	i = start;
	while (i < ac)
	{
		split = ft_split(av[i]);
		process_split(a, split);
		i++;
	}
}

int	is_sorted(t_stack *a)
{
	t_node	*i;

	if (!a)
		return (0);
	i = a->top;
	while (i->next)
	{
		if (i->value > i->next->value)
			return (0);
		i = i->next;
	}
	return (1);
}
