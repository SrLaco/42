/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 19:57:44 by cade-mou          #+#    #+#             */
/*   Updated: 2026/09/19 15:50:49 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	prog_free(t_prog *prog)
{
	if (prog == NULL)
		return ;
	free(prog->ops);
	free(prog);
}

t_prog	*prog_new(void)
{
	t_prog	*prog;

	prog = malloc(sizeof(t_prog));
	if (!prog)
		return (NULL);
	prog->ops = malloc(sizeof(t_op) * 64);
	if (!prog->ops)
	{
		free(prog);
		return (NULL);
	}
	prog->len = 0;
	prog->cap = 64;
	return (prog);
}

void	prog_push(t_ctx *c, t_op op)
{
	t_op	*next;
	t_prog	*prog;

	prog = c->prog;
	if (prog->len == prog->cap)
	{
		prog->cap *= 2;
		next = malloc(sizeof(t_op) * prog->cap);
		if (!next)
			ps_die(c);
		ft_memcpy(next, prog->ops, sizeof(t_op) * prog->len);
		free(prog->ops);
		prog->ops = next;
	}
	prog->ops[prog->len] = op;
	prog->len++;
}

void	prog_flush(t_ctx *ctx)
{
	int		i;
	t_op	curr_ops;

	i = 0;
	while (i < ctx->prog->len)
	{
		curr_ops = ctx->prog->ops[i];
		if (ctx->counts)
			ctx->counts[curr_ops]++;
		ft_putendl_fd((char *)op_name(curr_ops), 1);
		i++;
	}
}
