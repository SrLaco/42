/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tiny.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 14:33:26 by cade-mou          #+#    #+#             */
/*   Updated: 2026/09/06 14:48:50 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_three(t_ctx *ctx)
{
	int	x;
	int	y;
	int	z;

	x = ctx->a->data[0];
	y = ctx->a->data[1];
	z = ctx->a->data[2];
	if (x > y && y < z && x < z)
		op_sa(ctx);
	else if (x > y && y > z)
	{
		op_sa(ctx);
		op_rra(ctx);
	}
	else if (x > y && x > z)
		op_ra(ctx);
	else if (x < y && y > z && x < z)
	{
		op_sa(ctx);
		op_ra(ctx);
	}
	else if (x < y && y > z && x > z)
		op_rra(ctx);
	return ;
}

void	sort_tiny(t_ctx *ctx)
{
	if (ctx->a->size < 2)
		return ;
	if (ctx->a->size == 2)
	{
		if (ctx->a->data[0] > ctx->a->data[1])
			op_sa(t_ctx *ctx);
		return ;
	}
	sort_three(int *ctx);
	return ;
}
