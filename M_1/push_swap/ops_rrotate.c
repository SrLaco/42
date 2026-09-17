/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_rrotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 13:02:11 by cade-mou          #+#    #+#             */
/*   Updated: 2026/09/16 00:07:23 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_down(t_stack *stack)
{
	int tmp;

	if (stack->size < 2)
		return ;
	tmp = stack->data[stack->size - 1];
	ft_memmove(stack->data + 1, stack->data, (stack->size - 1) * sizeof(int));
	stack->data[0] = tmp;
}

void	op_ra(t_ctx *ctx)
{
	rotate_down(ctx->a);
	emit(ctx, OP_RRA);
}

void	op_rb(t_ctx *ctx)
{
	rotate_down(ctx->b);
	emit(ctx, OP_RRB);
}

void	op_rr(t_ctx *ctx)
{
	rotate_down(ctx->a);
	rotate_down(ctx->b);
	emit(ctx, OP_RRR);
}
