/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 12:05:42 by cade-mou          #+#    #+#             */
/*   Updated: 2026/04/12 11:23:15 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// {
// 	int	a;
// 	int	b;
// 	int	div;
// 	int	mod;
// 	int	main(void)
// 	a = 20;
// 	b = 6;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("%d, %d", div, mod);
// 	return (0);
// }
