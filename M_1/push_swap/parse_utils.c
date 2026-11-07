/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 17:48:47 by cade-mou          #+#    #+#             */
/*   Updated: 2026/09/19 15:27:38 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_int_token(const char *stack)
{
	int	i;

	i = 0;
	if (stack[i] == '+' || stack[i] == '-')
		i++;
	if (!stack[i])
		return (0);
	while (stack[i])
	{
		if (stack[i] < '0' || stack[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	token_to_int(const char *stack, int *out)
{
	if (stack[0] == '+' || stack[0] == '-')
	{
		if (ft_strlen(stack) > 11)
			return (0);
	}
	if (ft_strlen(stack) > 10)
		return (0);
	*out = ft_atoi(stack);
	return (1);
}

int	has_duplicates(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->size)
	{
		j = i + 1;
		while (j < stack->size)
		{
			if (stack->data[i] == stack->data[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	free_split(char **parts)
{
	int	i;

	if (!parts)
		return ;
	i = 0;
	while (parts[i])
	{
		free(parts[i]);
		i++;
	}
	free(parts);
	return ;
}

int	flag_id(const char *stack)
{
	if (!ft_strncmp(stack, "--simple", 9))
		return (STRAT_SIMPLE);
	if (!ft_strncmp(stack, "--medium", 9))
		return (STRAT_MEDIUM);
	if (!ft_strncmp(stack, "--complex", 10))
		return (STRAT_COMPLEX);
	if (!ft_strncmp(stack, "--adaptive", 11))
		return (STRAT_ADAPTIVE);
	if (!ft_strncmp(stack, "--bench", 8))
		return (FLAG_BENCH);
	return (0);
}
