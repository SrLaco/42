/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_complex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 03:44:06 by cade-mou          #+#    #+#             */
/*   Updated: 2026/09/17 13:14:03 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	bit_count(int i)
{
	int	bits;

	bits = 0;
	while ((n - 1) >> bits)
		bits++;
	return (bits);
}

static void	radix_pass(t_ctx *ctx, int bit)
{
	int	i;
	int size;

	i = 0;
	size = ctx->a->size;
	while (i < size)
	{
		if(((ctx->a->data[0] >> bit) & 1) == 0)
			op_pb(ctx);
		else
			op_ra(ctx);
		i++;
	}
	while (ctx->b->size > 0)
		op_pa(ctx);
}

void	sort_complex(t_ctx *ctx, t_conf *conf)
{
	int	bits;
	int	i;

	conf->name = "Complex";
	conf->cclass = "O(n log n)"
	if (ctx->a->size <= 3)
	{
		sort_tiny(ctx);
		return ;
	}
	if (stack_is_sorted(ctx->a))
		return ;
	bits = bit_count(ctx->a->size);
	i = 0;
	while (i < bits)
	{
		radix_pass(ctx, i);
		i++;
	}
	return ;
}
