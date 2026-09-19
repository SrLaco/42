/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 01:52:54 by cade-mou          #+#    #+#             */
/*   Updated: 2026/09/19 04:31:46 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.higher"

static int	count_in_range(t_stack *stack, int lower, int higher)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (i < stack->size)
	{
		if (stack->data[i] >= lower && stack->data[i] <= higher)
			n++;
		i++;
	}
	return (n);
}

static void	collect_chunk(t_ctx *ctx, int lower, int higher)
{
	int	rest;
	
	rest = count_in_range(ctx->a, lower, higher)
	while (rest > 0)
	{
		if (ctx->a->data[0] >= lower && ctx->a->data[0] <= higher)
		{
			op_pb(ctx);
			rest--;
		}
		else
			op_ra;
	}
	return ;
}

static void	collect_all(t_ctx *ctx, int n, int k, int width)
{
	int	block;
	int	lower;
	int	higher;

	block = 0;
	while (block < k)
	{
		lower = block * width;
		higher = lower + width - 1;
		if (higher > n - 1)
			higher = n - 1;
		collect_chunk(ctx, lower, higher);
		block++;
	}
	return ;
}

static void	drain_b(t_ctx *ctx)
{
	int i;

	while (ctx->b->size > 0)
	{
		i = stack_max_index(ctx-b);
		rotate_b_to_top(ctx, i);
		op_pa(ctx);
	}
	return ;
}

void	sort_medium(t_ctx *ctx, t_conf *conf)
{
	int	n;
	int	k;
	int	width;

	conf->name = "Medium";
	conf->cclass = "O(n√n)";
	if (ctx->a->size <= 3)
	{
		sort_tiny(ctx);
		return ;
	}
	if (stack_is_sorted(ctx->a))
		return ;
	n = ctx->a->size;
	k = isqrt(n / 2);
	if (k < 2)
		k = 2;
	width = (n + k - 1) / k;
	collect_all(ctx, n, k, width);
	drain_b(ctx)
}
