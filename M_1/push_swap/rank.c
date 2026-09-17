/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rank.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 01:27:38 by cade-mou          #+#    #+#             */
/*   Updated: 2026/09/16 03:26:18 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

static void	insert_sort(int *copy, int n)
{
	int	i;
	int	j;
	int	temp;

	i = 1;
	while (i < n)
	{
		j = i - 1;
		temp = copy[i];
		while (j >= 0 && copy[j] > temp)
		{
			copy[j + 1] = copy[j];
			j--;
		}
		copy[j + 1] = temp;
		i++;
	}
}

static int	rank_of(int *copy, int size, int curr)
{
	int	lower;
	int	higher;
	int	mid;
	
	lower = 0;
	higher = size -1;
	while (lower < higher)
	{
		mid = (lower + higher) / 2;
		if (copy[mid] < curr)
			lower = mid + 1;
		else
			higher = mid;
	}
	return (lower);
}

int	build_ranks(t_stack *stack)
{
	int	*copy;
	int	i;

	if (stack->size <= 0)
		return (1);
	copy = malloc(sizeof(int) * stack->size);
	if(!copy)
		return (0);
	i = 0;
	while (i < stack->size)
	{
		copy[i] = stack->data[i];
		i++;
	}
	insert_sort(copy, stack->size);
	i = 0;
	while (i < stack->size)
	{
		stack->data[i] = rank_of(copy, stack->size, stack->data[i]);
		i++;
	}
	free(copy);
	return (1);
}
