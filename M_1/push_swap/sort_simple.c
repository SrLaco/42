/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 14:48:59 by cade-mou          #+#    #+#             */
/*   Updated: 2026/09/15 03:25:52 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_simple(t_ctx *ctx, t_conf *conf)
{
	int	i;

	conf->name = "Simple";
	conf->cclass = "O(n²)";
	if (ctx->a->size <= 3)
	{
		sort_tiny(t_ctx *ctx)
		return ;
	}
	if (stack_is_sorted(ctx->a))
		return ;
	while (ctx->a->size > 0)
	{
		i = stack_min_index(ctx->a);
		rotate_a_to_top(ctx, i);
		op_pb(ctx);
	}
	while (ctx->b->size > 0)
		op_pa(ctx);
	return ;
}
