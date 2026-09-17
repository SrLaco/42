/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 04:41:39 by cade-mou          #+#    #+#             */
/*   Updated: 2026/09/07 07:45:08 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	isqrt(int n)
{
	int	i;

	i = 1;
	while((i + 1) * (i + 1) <= n)
		i++;
	return (i);
}

void	rotate_a_to_top(t_ctx *ctx, int i)
{
	int	size;

	size = ctx->a->size;
	if (i <= size / 2)
	{
		while(i-- > 0)
			op_ra(ctx);
	}
	else
	{
		while (size-- > i)
			op_rra(ctx);
	}
}

void	rotate_b_to_top(t_ctx *ctx, int i)
{
	int	size;

	size = ctx->b->size;
	if (i <= size / 2)
	{
		while(i-- > 0)
			op_rb(ctx);
	}
	else
	{
		while (size-- > i)
			op_rrb(ctx);
	}
}

void	zero_counts(int *counts)
{
	int	i;

	i = 0;
	while (i < 11)
	{
		counts[i] = 0;
		i++;
	}
}

void	ps_die(t_ctx *c)
{
	ft_putendl_fd("Error", 2);
	while (c != NULL)
	{
		stack_free(c->a);
		stack_free(c->b);
		prog_free(c->prog);
		c = c->up;
	}
	exit(1);
}
