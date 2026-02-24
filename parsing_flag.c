/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhasawn <hkhasawn@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 23:21:09 by hkhasawn          #+#    #+#             */
/*   Updated: 2026/02/23 23:21:30 by hkhasawn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_duplicate_strategy(int chosen_strategy)
{
	if (chosen_strategy)
		printerror();
}

static int	parse_strategy(char *flag, t_conf *conf, int chosen)
{
	if (ft_strcmp(flag, "--simple") == 0)
		conf->strategy = Simple;
	else if (ft_strcmp(flag, "--medium") == 0)
		conf->strategy = Medium;
	else if (ft_strcmp(flag, "--complex") == 0)
		conf->strategy = Complex;
	else if (ft_strcmp(flag, "--adaptive") == 0)
		conf->strategy = Adaptive;
	else
		return (-1);
	check_duplicate_strategy(chosen);
	return (1);
}

static int	parse_one_flag(char *flag, t_conf *conf, int chosen)
{
	int	result;

	if (ft_strcmp(flag, "--bench") == 0)
	{
		conf->bench = 1;
		return (chosen);
	}
	result = parse_strategy(flag, conf, chosen);
	if (result == -1)
		printerror();
	return (result);
}

static t_conf	init_conf(void)
{
	t_conf	conf;

	conf.strategy = Adaptive;
	conf.bench = 0;
	conf.start = 0;
	return (conf);
}

t_conf	read_flag(int ac, char **av)
{
	int		i;
	int		chosen;
	t_conf	conf;

	i = 1;
	chosen = 0;
	conf = init_conf();
	while (i < ac && av[i][0] == '-' && av[i][1] == '-')
	{
		chosen = parse_one_flag(av[i], &conf, chosen);
		i++;
	}
	if (i == ac)
		printerror();
	conf.start = i;
	return (conf);
}
