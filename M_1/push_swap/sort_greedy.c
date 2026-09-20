/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_greedy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 23:26:38 by cade-mou          #+#    #+#             */
/*   Updated: 2026/09/19 23:26:38 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_circular_sorted(t_stack *stack)
{
	int	descents;
	int	i;

	descents = 0;
	i = 0;
	while (i < stack->size)
	{
		if (stack->data[i] > stack->data[(i + 1) % stack->size])
			descents++;
		i++;
	}
	return (descents <= 1);
}

static void	push_phase(t_ctx *ctx)
{
	t_move	m;

	while (ctx->a->size > 3 && !is_circular_sorted(ctx->a))
	{
		m = best_push(ctx);
		exec_move(ctx, m);
		op_pa(ctx);
	}
}

static void	insert_phase(t_ctx *ctx)
{
	t_move	m;

	while (ctx->b->size > 0)
	{
		m = best_insert(ctx);
		exec_move(ctx, m);
		op_pb(ctx);
	}
}

void	sort_greedy_run(t_ctx *c, t_conf *conf)
{
	conf->name = "Greedy";
	conf->cclass = "O(n²)";
	if (stack_is_sorted(c->a))
		return ;
	if (c->a->size <= 3)
	{
		sort_tiny(c);
		return ;
	}
	push_phase(c);
	if (c->a->size <= 3)
		sort_tiny(c);
	insert_phase(c);
	rotate_a_to_top(c, stack_min_index(c->a));
	return ;
}
