/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 13:15:48 by cade-mou          #+#    #+#             */
/*   Updated: 2026/09/06 13:47:38 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_top(t_stack *s)
{
	int	tmp;

	if (stack->size < 2)
		return ;
	tmp = stack->data[0];
	stack->data[0] = stack->data[1];
	stack->data[1] = tmp;
}

void	op_sa(t_ctx	*ctx)
{
	swap_top(ctx->a);
	emit(ctx, OP_SA);
}

void	op_sb(t_ctx	*ctx)
{
	swap_top(ctx->a);
	emit(ctx, OP_SB);
}

void	op_ss(t_ctx	*ctx)
{
	swap_top(ctx->a);
	swap_top(ctx->b);
	emit(ctx, OP_SS);
}
