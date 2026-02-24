/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkhasawn <hkhasawn@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 03:03:12 by hkhasawn          #+#    #+#             */
/*   Updated: 2026/02/24 03:03:18 by hkhasawn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_words(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == ' ')
			i++;
		if (s[i] && s[i] != ' ')
		{
			count++;
			while (s[i] && s[i] != ' ')
				i++;
		}
	}
	return (count);
}

static char	*word_dup(char *s, int start, int end)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		printerror();
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *s)
{
	char	**result;
	int		i;
	int		j;
	int		start;

	result = malloc(sizeof(char *) * (count_words(s) + 1));
	if (!result)
		printerror();
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == ' ')
			i++;
		start = i;
		while (s[i] && s[i] != ' ')
			i++;
		if (i > start)
			result[j++] = word_dup(s, start, i);
	}
	result[j] = NULL;
	return (result);
}
