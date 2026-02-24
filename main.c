/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhasawn <hkhasawn@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 03:10:20 by hkhasawn          #+#    #+#             */
/*   Updated: 2026/02/24 03:10:33 by hkhasawn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	t_conf	conf;
	t_stack	a;
	t_node	*cur;

	if (ac == 1)
		return (0);
	conf = read_flag(ac, av);
	parse_numbers(&a, ac, av, conf.start);
	check_duplicates(&a);
	cur = a.top;
	while (cur)
	{
		printf("%d\n", cur->value);
		cur = cur->next;
	}
	free_stack(&a);
	return (0);
}
