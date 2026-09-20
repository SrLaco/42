/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   greedy_pick.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 23:26:34 by cade-mou          #+#    #+#             */
/*   Updated: 2026/09/19 23:26:34 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_move	cand_push(t_ctx *ctx, int i)
{
	return (pair_best(ctx, i, target_in_b(ctx->b, ctx->a->data [i])))
}

t_move	best_push(t_ctx *ctx)
{
	t_move	best;
	int		size;
	int		k;
	
	size = ctx->a->size;
	best = cand_push(ctx, 0);
	k = 1;
	while (k <= size - k && k < move_cost(best))
	{
		best = move_better(ctx, best, cand_push(ctx, k));
		if (size - k != k)
			best = move_better(ctx, best, cand_push(ctx, size - k));
		k++;
	}
	return (best);
}

static t_move	cand_insert(t_ctx *ctx, int i)
{
	return (pair_best(ctx, target_in_b(ctx->a, ctx->b->data [i]), i))
}

t_move	best_insert(t_ctx *ctx)
{
	t_move	best;
	int		size;
	int		k;
	
	size = ctx->b->size;
	best = cand_insert(ctx, 0);
	k = 1;
	while (k <= size - k && k < move_cost(best))
	{
		best = move_better(ctx, best, cand_insert(ctx, k));
		if (size - k != k)
			best = move_better(ctx, best, cand_insert(ctx, size - k));
		k++;
	}
	return (best);
}
