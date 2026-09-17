/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 12:18:49 by cade-mou          #+#    #+#             */
/*   Updated: 2026/09/16 00:07:11 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_up(t_stack *stack)
{
	int tmp;

	if (stack->size < 2)
		return ;
	tmp = stack->data[0];
	ft_memmove(stack->data, stack->data + 1, (stack->size - 1) * sizeof(int));
	stack->data[stack->size - 1] = tmp;
}

void	op_ra(t_ctx *ctx)
{
	rotate_up(ctx->a);
	emit(ctx, OP_RA);
}

void	op_rb(t_ctx *ctx)
{
	rotate_up(ctx->b);
	emit(ctx, OP_RB);
}

void	op_rr(t_ctx *ctx)
{
	rotate_up(ctx->a);
	rotate_up(ctx->b);
	emit(ctx, OP_RR);
}