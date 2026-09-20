/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   greedy_exec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 23:26:36 by cade-mou          #+#    #+#             */
/*   Updated: 2026/09/19 23:26:36 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rot_a(t_ctx *ctx, int n)
{
	while (n > 0)
	{
		op_ra(ctx);
		n--;
	}
	while (n < 0)
	{
		op_rra(ctx);
		n++;
	}
}

static void	rot_b(t_ctx *ctx, int n)
{
	while (n > 0)
	{
		op_rb(ctx);
		n--;
	}
	while (n < 0)
	{
		op_rrb(ctx);
		n++;
	}
}

void	exec_move(t_ctx *ctx, t_move m)
{
	while (m.a > 0 && m.b > 0)
	{
		op_rr(ctx);
		m.a--;
		m.b--;
	}
	while (m.a < 0 && m.b < 0)
	{
		op_rrr(ctx);
		m.a++;
		m.b++;
	}
	rot_a(ctx, m.a);
	rot_b(ctx, m.b);
}

void	sort_greedy(t_ctx *ctx, t_conf *conf)
{
	ctx->bias = 0;
	sort_greedy_run(ctx, conf)
}

void	sort_greedy_alt(t_ctx *ctx, t_conf *conf)
{
	ctx->bias = 1;
	sort_greedy_run(ctx, conf)
}
