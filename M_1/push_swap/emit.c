/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   emit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 22:12:26 by cade-mou          #+#    #+#             */
/*   Updated: 2026/09/20 18:56:48 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*op_name(t_op op)
{
	static char	*name[11] = {"sa", "sb", "ss", "pa", "pb", "ra",
		"rb", "rr", "rra", "rrb", "rrr"};

	if (name[op])
		return (name[op]);
	return ("");
}

void	emit(t_ctx *ctx, t_op op)
{
	if (!ctx->prog)
		return ;
	prog_push(ctx, op);
}
