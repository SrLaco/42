/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_adaptive.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 14:44:58 by cade-mou          #+#    #+#             */
/*   Updated: 2026/09/20 14:44:58 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_adaptive(t_ctx *ctx, t_conf *conf, double disorder)
{
	if (disorder < 0.2)
	{
		run_portfolio (ctx, conf, sort_simple);
		conf->cclass = "O(n²)";
	}
	else if (disorder < 0.5)
	{
		run_portfolio (ctx, conf, sort_medium);
		conf->cclass = "O(n√n)";
	}
	else
	{
		run_portfolio (ctx, conf, sort_complex);
		conf->cclass = "O(n log n)";
	}
	conf->name = "Adaptive";
}
