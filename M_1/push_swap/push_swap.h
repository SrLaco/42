/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 18:45:07 by cade-mou          #+#    #+#             */
/*   Updated: 2026/09/20 18:57:15 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

# define STRAT_NONE 0
# define STRAT_SIMPLE 1
# define STRAT_MEDIUM 2
# define STRAT_COMPLEX 3
# define STRAT_ADAPTIVE 4
# define FLAG_BENCH 5
# define GREEDY_MAX_N 1500

typedef struct s_stack
{
	int	*data;
	int	size;
	int	cap;
}	t_stack;

typedef enum e_op
{
	OP_SA,
	OP_SB,
	OP_SS,
	OP_PA,
	OP_PB,
	OP_RA,
	OP_RB,
	OP_RR,
	OP_RRA,
	OP_RRB,
	OP_RRR
}	t_op;

typedef struct s_prog
{
	t_op	*ops;
	int		len;
	int		cap;
}	t_prog;

typedef struct s_move
{
	int	a;
	int	b;
}	t_move;

typedef struct s_ctx
{
	t_stack			*a;
	t_stack			*b;
	int				*counts;
	int				bias;
	t_prog			*prog;
	struct s_ctx	*up;
}	t_ctx;

typedef struct s_conf
{
	int		strategy;
	int		bench;
	char	*name;
	char	*cclass;
}	t_conf;

typedef void	(*t_sortfn)(t_ctx *c, t_conf *conf);

/* stack.c */
t_stack	*stack_new(int cap);
void	stack_free(t_stack *stack);
int		stack_is_sorted(t_stack *stack);
int		stack_min_index(t_stack *stack);
int		stack_max_index(t_stack *stack);

/* emit.c */
char	*op_name(t_op op);
void	emit(t_ctx *ctx, t_op op);

/* prog.c */
t_prog	*prog_new(void);
void	prog_free(t_prog *prog);
void	prog_push(t_ctx *ctx, t_op op);
void	prog_flush(t_ctx *ctx);

/* portfolio.c */
void	run_portfolio(t_ctx *cctx, t_conf *conf, t_sortfn alt);

/* ops_push.c */
void	op_pa(t_ctx *ctx);
void	op_pb(t_ctx *ctx);

/* ops_swap.c */
void	op_sa(t_ctx *ctx);
void	op_sb(t_ctx *ctx);
void	op_ss(t_ctx *ctx);

/* ops_rotate.c */
void	op_ra(t_ctx *ctx);
void	op_rb(t_ctx *ctx);
void	op_rr(t_ctx *ctx);

/* ops_rrotate.c */
void	op_rra(t_ctx *ctx);
void	op_rrb(t_ctx *ctx);
void	op_rrr(t_ctx *ctx);

/* parse.c */
int		parse_flags(int argc, char **argv, t_conf *conf);
t_stack	*parse_numbers(int argc, char **argv);

/* parse_utils.c */
int		is_int_token(const char *stack);
int		token_to_int(const char *stack, int *out);
int		has_duplicates(t_stack *stack);
void	free_split(char **parts);
int		flag_id(const char *stack);

/* utils.c */
int		isqrt(int n);
void	rotate_a_to_top(t_ctx *ctx, int i);
void	rotate_b_to_top(t_ctx *ctx, int i);
void	zero_counts(int *counts);
void	ps_die(t_ctx *ctx);

/* disorder.c */
double	compute_disorder(t_stack *a);

/* rank.c */
int		build_ranks(t_stack *a);

/* sort_tiny.c, sort_simple.c */
void	sort_tiny(t_ctx *ctx);
void	sort_simple(t_ctx *ctx, t_conf *conf);

/* sort_medium.c */
void	sort_medium(t_ctx *ctx, t_conf *conf);

/* sort_complex.c */
void	sort_complex(t_ctx *ctx, t_conf *conf);

/* sort_greedy.c, greedy_exec.c */
void	sort_greedy_run(t_ctx *ctx, t_conf *conf);
void	sort_greedy(t_ctx *ctx, t_conf *conf);
void	sort_greedy_alt(t_ctx *ctx, t_conf *conf);

/* greedy_cost.c */
int		move_cost(t_move m);
t_move	move_better(t_ctx *ctx, t_move x, t_move y);
t_move	pair_best(t_ctx *ctx, int ia, int ib);
int		target_in_b(t_stack *b, int value);
int		target_in_a(t_stack *a, int value);

/* greedy_pick.c */
t_move	best_push(t_ctx *ctx);
t_move	best_insert(t_ctx *ctx);

void	exec_move(t_ctx *ctx, t_move m);

/* sort_adaptive.c */
void	sort_adaptive(t_ctx *ctx, t_conf *conf, double d);

/* bench.c */
void	bench_print(t_ctx *ctx, t_conf *conf, double d);

/* read_ops_bonus.c, apply_op_bonus.c */
char	*read_all(int fd);
int		apply_line(t_ctx *ctx, const char *s, int len);
int		apply_rot(t_ctx *ctx, const char *s, int len);

#endif