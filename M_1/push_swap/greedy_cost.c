/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   greedy_cost.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 23:26:30 by cade-mou          #+#    #+#             */
/*   Updated: 2026/09/19 23:26:30 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	move_cost(t_move m)
{
	int	ca;
	int	cb;

	ca = m.a;
	if (ca < 0)
		ca = -ca;
	cb = m.b;
	if (cb < 0)
		cb = -cb;
	if ((m.a >= 0 && m.b >= 0) || (m.a <= 0 && m.b <= 0))
	{
		if (ca > cb)
			return (ca);
		return (cb);
	}
	return (ca + cb);
}

t_move	move_better(t_ctx *ctx, t_move x, t_move y)
{
	int	cx;
	int	cy;

	cx = move_cost(x);
	cy = move_cost(y);
	if (cy < cx)
		return (y);
	if (cy == cx && ctx->bias == 1)
		return (y);
	return (x);
}

t_move	pair_best(t_ctx *ctx, int ia, int ib)
{
	t_move	m;
	t_move	best;
	
	m.a = ia;
	m.b = ib;
	m.b = ib - ctx->b->size;
	best = move_better(ctx, best, m);
	m.a = ia - ctx->a->size;
	best = move_better(ctx, best, m);
	m.b = ib;
	best = move_better(ctx, best, m);
	return (best);
}

int	target_in_b(t_stack *b, int value)
{
	int	i;
	int	max;
	int	succ;
	
	i = 0;
	max = 0;
	succ = -1;
	while (i < b->size)
	{
		if (b->data[i] > b->data[max])
			max = i;
		if (b->data[i] < value
			&& (succ == -1 || b->data[i] > b->data[succ]))
			succ = i;
		i++;
	}
	if (succ == -1)
		return (max);
	return (succ);
}

int	target_in_a(t_stack *a, int value)
{
	int	i;
	int	min;
	int	succ;
	
	i = 0;
	min = 0;
	succ = -1;
	while (i < a->size)
	{
		if (a->data[i] < a->data[min])
			min = i;
		if (a->data[i] > value
			&& (succ == -1 || a->data[i] < a->data[succ]))
			succ = i;
		i++;
	}
	if (succ == -1)
		return (min);
	return (succ);
}
