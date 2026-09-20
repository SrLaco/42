/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 14:43:26 by cade-mou          #+#    #+#             */
/*   Updated: 2026/09/20 14:43:26 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	reject_flags(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == '-' && argv[i][0] == '-')
			return (0);
		i++;
	}
	return (1);
}

static void	fail_ck(t_ctx *ctx, char *buf)
{
	ft_putendl_fd("Error", 2);
	free(buf);
	stack_free(ctx->a);
	stack_free(ctx->b);
	exit(255);
}

static int	run_all(t_ctx *ctx, char *buf)
{
	int	ini;
	int	i;

	ini = 0;
	i = 0;
	while (buf[i])
	{
		if (buf[i] == '\n')
		{
			if(!apply_line(ctx, buf + ini, i - ini))
				return (0);
			ini = i + 1;
		}
		i++;
	}
	return (i == ini);
}

static int	cleanup_ck(t_ctx *ctx, char *buf)
{
	free(buf);
	stack_free(ctx->a);
	stack_free(ctx->b);
	return (0);
}

int	main(int argc, char **argv)
{
	char	*buf;
	t_ctx	ctx;

	ft_memset(&ctx, 0, sizeof(t_ctx));
	buf = NULL;
	if (!reject_flags(argc, argv))
		fail_ck(&ctx, buf);
	ctx.a = parse_numbers(argc, argv);
	if (!ctx.a)
		fail_ck(&ctx, buf);
	if (ctx.a->size == 0)
		return (cleanup_ck(&ctx, buf));
	ctx.b = stack_new(ctx.a->size);
	buf = read_all(0);
	if (!ctx.b || !buf)
		fail_ck(&ctx, buf);
	if (!run_all(&ctx, buf))
		fail_ck(&ctx, buf);
	if (stack_is_sorted(ctx.a) && ctx.b->size == 0)
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);
	return (cleanup_ck(&ctx, buf));
}
