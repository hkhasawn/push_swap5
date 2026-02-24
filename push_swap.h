/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhasawn <hkhasawn@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 23:46:28 by hkhasawn          #+#    #+#             */
/*   Updated: 2026/02/24 17:40:42 by hkhasawn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

/* ===================== STRUCTS ===================== */

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
}					t_strategy;

typedef struct s_op
{
	int				sa;
	int				sb;
	int				ss;
	int				pa;
	int				pb;
	int				ra;
	int				rb;
	int				rr;
	int				rra;
	int				rrb;
	int				rrr;
	int				total;
}					t_ops;

typedef struct s_conf
{
	t_strategy		strategy;
	int				bench;
	int				start;
}					t_conf;

/* ===================== PROTOTYPES ===================== */

/* utils */
int					ft_strcmp(char *s1, char *s2);
int					ft_atoi(char *str);
int					is_valid_number(char *str);
char				**ft_split(char *s);
/* parsing */
t_conf				read_flag(int ac, char **av);
void				parse_numbers(t_stack *a, int ac, char **av, int start);
void				check_duplicates(t_stack *a);
int					is_sorted(t_stack *a);
static void			process_split(t_stack *a, char **split);
/* error */
void				printerror(void);
/* stack */
void				init_stack(t_stack *stack);
t_node				*new_node(int value);
void				add_back(t_stack *stack, t_node *node);
void				free_stack(t_stack *stack);
void				swap_stack(t_stack *stack);
void				push_stack(t_stack *from, t_stack *to);
/* indexing */
void				assign_index(t_stack *a);
#endif
