/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 14:17:33 by cade-mou          #+#    #+#             */
/*   Updated: 2026/09/20 14:17:33 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	put_percent(double d)
{
	int	cents;

	cents = (int)(d * 10000.0 + 0.5);
	ft_putnbr_fd(cents / 100, 2);
	ft_putchar_fd('.', 2);
	if (cents % 100 < 10)
		ft_putchar_fd('0', 2);
	ft_putchar_fd('%', 2);
}

static void	put_counts(t_ctx *ctx, int from, int to)
{
	int	i;

	ft_putstr_fd("[bench] ", 2);
	i = from;
	while (i <= to)
	{
		ft_putstr_fd(op_name(i), 2);
		ft_putstr_fd(": ", 2);
		ft_putnbr_fd(ctx->counts[i], 2);
		if (i < to)
			ft_putstr_fd("  ", 2);
		i++;
	}
	ft_putchar_fd('\n', 2);
}

void	bench_print(t_ctx *ctx, t_conf *conf, double d)
{
	int	i;
	int	total;

	ft_putstr_fd("[bench] disorder:  ", 2);
	put_percent(d);
	ft_putchar_fd('\n', 2);
	ft_putstr_fd("[bench] strategy:  ", 2);
	ft_putstr_fd(conf->name, 2);
	ft_putstr_fd(" / ", 2);
	ft_putendl_fd(conf->cclass, 2);
	total = 0;
	i = 0;
	while (i < 11)
	{
		total += ctx->counts[i];
		i++;
	}
	ft_putstr_fd("[bench] total_ops: ", 2);
	ft_putnbr_fd(total, 2);
	ft_putchar_fd('\n', 2);
	put_counts(ctx, OP_SA, OP_PB);
	put_counts(ctx, OP_RA, OP_RRR);
}
