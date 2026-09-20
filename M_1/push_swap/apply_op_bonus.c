/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_op_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 14:44:28 by cade-mou          #+#    #+#             */
/*   Updated: 2026/09/20 14:44:28 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	same(char *s, int len, char *lit)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (lit[i] == '\0' || s[i] != lit[i])
			return (0);
		i++;
	}
	return (lit[len] == '\0');
}

int	apply_rot(t_ctx *ctx, const char *s, int len)
{
	if (same(s, len, "ra"))
		op_ra(ctx);
	else if (same(s, len, "rb"))
		op_rb(ctx);
	else if (same(s, len, "rr"))
		op_rr(ctx);
	else if (same(s, len, "rra"))
		op_rra(ctx);
	else if (same(s, len, "rrb"))
		op_rrb(ctx);
	else if (same(s, len, "rrr"))
		op_rrr(ctx);
	else
		return (0);
	return (1);	
}

int	apply_line(t_ctx *ctx, const char *s, int len)
{
	if (len == 0)
		return (0);
	if (same(s, len, "sa"))
		op_sa(ctx);
	else if (same(s, len, "sb"))
		op_sb(ctx);
	else if (same(s, len, "ss"))
		op_ss(ctx);
	else if (same(s, len, "pa"))
		op_pa(ctx);
	else if (same(s, len, "pb"))
		op_pb(ctx);
	else
		return (apply_rot(c, s, len));
	return (1);
}
