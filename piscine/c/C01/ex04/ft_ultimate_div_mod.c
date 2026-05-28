/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 18:10:45 by cade-mou          #+#    #+#             */
/*   Updated: 2026/04/12 11:27:37 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	a = 15;
// 	b = 3;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("%d, %d", a, b);
// }