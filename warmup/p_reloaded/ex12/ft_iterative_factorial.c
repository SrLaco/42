/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 17:32:14 by cade-mou          #+#    #+#             */
/*   Updated: 2026/05/22 19:16:46 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	acc;

	acc = 1;
	if (nb >= 0 && nb <= 12)
	{
		while (nb >= 2)
		{
			acc *= nb--;
		}
		return (acc);
	}
	else
		return (0);
}
