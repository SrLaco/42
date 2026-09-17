/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 13:12:45 by cade-mou          #+#    #+#             */
/*   Updated: 2026/09/16 00:07:02 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	move_top(t_stack *from, t_stack *to)
{
	if (from -> size == 0)
		return ;
	if (to -> size > 0)
		ft_memmove(to->data + 1, to->data, to->size * sizeof(int));
	to->data[0] = from->data[0];
	to->size++;
	ft_memmove(from->data, from->data + 1, from->size * sizeof(int));
	from->size--;
}

void	op_pa(t_ctx *ctx)
{
	move_top(ctx->a, ctx->b);
	emit(ctx, OP_PA);
}

void	op_pb(t_ctx *ctx)
{
	move_top(ctx->b, ctx->a);
	emit(ctx, OP_PB);
}
