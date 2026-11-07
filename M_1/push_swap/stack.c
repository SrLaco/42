/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 21:02:24 by cade-mou          #+#    #+#             */
/*   Updated: 2026/08/20 20:24:03 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_free(t_stack *stack)
{
	if (!stack)
		return ;
	if (stack->data)
		free(stack->data);
	free(stack);
	return ;
}

t_stack	*stack_new(int cap)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	if (cap > 0)
		stack->data = malloc(sizeof(int) * cap);
	else
		stack->data = malloc(sizeof(int));
	if (!stack->data)
	{
		free(stack);
		return (NULL);
	}
	stack->cap = cap;
	stack->size = 0;
	return (stack);
}

int	stack_is_sorted(t_stack *stack)
{
	int	i;

	if (stack->size <= 1)
		return (1);
	i = 1;
	while (i < stack->size)
	{
		if (stack->data[i] < stack->data[i - 1])
			return (0);
		i++;
	}
	return (1);
}

int	stack_min_index(t_stack *stack)
{
	int	i;
	int	min;

	min = 0;
	i = 1;
	while (i < stack->size)
	{
		if (stack->data[i] < stack->data[min])
			min = i;
		i++;
	}
	return (min);
}

int	stack_max_index(t_stack *stack)
{
	int	i;
	int	max;

	max = 0;
	i = 1;
	while (i < stack->size)
	{
		if (stack->data[i] > stack->data[max])
			max = i;
		i++;
	}
	return (max);
}
