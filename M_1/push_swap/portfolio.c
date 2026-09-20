/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   portfolio.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 13:38:54 by cade-mou          #+#    #+#             */
/*   Updated: 2026/09/20 13:38:54 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*stack_dup(t_stack *src)
{
	t_stack	*copy;

	copy = stack_new(src->cap)
	if (copy == NULL)
		return (NULL);
	ft_memcpy(copy->dta, src->data, sizeof(int) * src->size);
	copy->size = src->size;
	return (copy);
}

static t_prog	*simulate(t_ctx *c, t_conf *conf, t_sortfn fn)
{
	t_ctx	sim;

	sim.counts = NULL;
	sim.bias = 0;
	sim.up = c;
	sim.a = stack_dup(c->a);
	sim.b = stack_dup(c->b);
	sim.prog = prog_new();
	if (sim.a == NULL || sim.b == NULL || sim.prog == NULL)
		ps_die(&sim);
	fn(&sim, conf);
	stack_free(sim.a);
	stack_free(sim.b);
	return (sim.prog);	
}

static void	take_if_shorter(t_ctx *ctx, t_prog *cand)
{
	if(cand->len < ctx->prog->len)
	{
		prog_free(ctx->prog);
		ctx->prog = cand;
	}
	else
		prog_free(cand);
	return ;
}

void	run_portfolio(t_ctx *ctx, t_conf *conf, t_sortfn alt)
{
	prog_free(ctx->prog);
	ctx->prog = NULL;
	if (ctx->a->size <= GREEDY_MAX_N)
	{
		ctx->prog = simulate(ctx, conf, sort_greedy);
		take_if_shorter(ctx, simulate(ctx, conf, sort_greedy_alt));
		take_if_shorter(ctx, simulate(ctx, conf, alt));
	}
	else
		ctx->prog = simulate(ctx, conf, alt);
}
