/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 14:47:40 by cade-mou          #+#    #+#             */
/*   Updated: 2026/09/20 14:47:40 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	cleanup(t_ctx *ctx)
{
	stack_free(ctx->a);
	stack_free(ctx->b);
	prog_free(ctx->prog);
	return (0);
}

static int	setup(int argc, char **argv, t_conf *conf, t_ctx *ctx)
{
	ctx->a = NULL;
	ctx->b = NULL;
	ctx->counts = NULL;
	ctx->bias = 0;
	ctx->prog = NULL;
	ctx->up = NULL;
	conf->strategy = STRAT_NONE;
	conf->bench = 0;
	conf->name = "";
	conf->cclass = "";
	if (!parse_flags(argc, argv, conf))
		return (0);
	if (conf->strategy == STRAT_NONE)
		conf->strategy = STRAT_ADAPTIVE;
	ctx->a = parse_numbers(argc, argv);
	if (!ctx->a)
		return (0);
	ctx->b = stack_new(ctx->a->size);
	ctx->prog = prog_new();
	if (!ctx->b || !ctx->prog)
		return (0);
	return (1);
}

static void	run_strategy(t_ctx *ctx, t_conf *conf, double d)
{
	if (conf->strategy == STRAT_SIMPLE)
		sort_simple(ctx, conf);
	else if (conf->strategy == STRAT_MEDIUM)
		sort_medium(ctx, conf);
	else if (conf->strategy == STRAT_COMPLEX)
		sort_complex(ctx, conf);
	else
		sort_adaptive(ctx, conf, d);
}

int	main(int argc, char **argv)
{
	t_conf	conf;
	t_ctx	ctx;
	int		counts[11];
	double	d;

	if (!setup(argc, argv, &conf, &ctx))
		ps_die(&ctx);
	if (ctx.a->size == 0)
		return (cleanup(&ctx));
	zero_counts(counts);
	ctx.counts = counts;
	d = compute_disorder(ctx.a);
	if (!build_ranks(ctx.a))
		ps_die(&ctx);
	run_strategy(&ctx, &conf, d);
	prog_flush(&ctx);
	if (conf.bench)
		bench_print(&ctx, &conf, d);
	return (cleanup(&ctx));
}
