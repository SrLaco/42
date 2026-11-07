/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 21:42:57 by cade-mou          #+#    #+#             */
/*   Updated: 2026/08/23 02:30:02 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static void	put(char *label, int n)
// {
// 	ft_putstr_fd(label, 1);
// 	ft_putnbr_fd(n, 1);
// 	ft_putchar_fd('\n', 1);
// }

// static void	fill3(t_stack *s, int a, int b, int c)
// {
// 	s->data[0] = a;
// 	s->data[1] = b;
// 	s->data[2] = c;
// 	s->size = 3;
// }

// int	main(void)
// {
// 	t_stack	*s;
// 	int		i;

// 	stack_free(NULL);
// 	s = stack_new(5);
// 	put("new size: ", s->size);
// 	put("new cap: ", s->cap);
// 	put("sorted vazia: ", stack_is_sorted(s));
// 	s->size = 1;
// 	s->data[0] = 7;
// 	put("sorted {7}: ", stack_is_sorted(s));
// 	put("min {7}: ", stack_min_index(s));
// 	fill3(s, 1, 2, 3);
// 	put("sorted {1 2 3}: ", stack_is_sorted(s));
// 	fill3(s, 1, 3, 2);
// 	put("sorted {1 3 2}: ", stack_is_sorted(s));
// 	i = 0;
// 	while (i < 5)
// 	{
// 		s->data[i] = 5 - i;
// 		i++;
// 	}
// 	s->size = 5;
// 	put("min {5 4 3 2 1}: ", stack_min_index(s));
// 	put("max {5 4 3 2 1}: ", stack_max_index(s));
// 	stack_free(s);
// 	return (0);
// }

// int	main(void)
// {
// 	t_ctx	c;
// 	int		counts[11];

// 	c.a = NULL;
// 	c.b = NULL;
// 	c.bias = 0;
// 	c.up = NULL;
// 	c.counts = counts;
// 	zero_counts(counts);
// 	c.prog = prog_new();
// 	if (!c.prog)
// 		return (1);
// 	emit(&c, OP_SA);
// 	emit(&c, OP_PB);
// 	emit(&c, OP_PB);
// 	emit(&c, OP_RRA);
// 	prog_flush(&c);
// 	ft_putnbr_fd(counts[OP_PB], 1);
// 	ft_putchar_fd('\n', 1);
// 	prog_free(c.prog);
// 	return (0);
// }

static int	fail(void)
{
	ft_putendl_fd("Error", 2);
	return (1);
}

static void	put_conf(t_conf *conf)
{
	ft_putstr_fd("strategy=", 1);
	ft_putnbr_fd(conf->strategy, 1);
	ft_putstr_fd(" bench=", 1);
	ft_putnbr_fd(conf->bench, 1);
}

int	main(int argc, char **argv)
{
	t_conf	conf;
	t_stack	*a;
	int		i;

	conf.strategy = STRAT_NONE;
	conf.bench = 0;
	if (!parse_flags(argc, argv, &conf))
		return (fail());
	a = parse_numbers(argc, argv);
	if (a == NULL)
		return (fail());
	put_conf(&conf);
	ft_putstr_fd(" n=", 1);
	ft_putnbr_fd(a->size, 1);
	i = -1;
	while (++i < a->size)
	{
		ft_putchar_fd(' ', 1);
		ft_putnbr_fd(a->data[i], 1);
	}
	ft_putchar_fd('\n', 1);
	stack_free(a);
	return (0);
}
