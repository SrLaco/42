/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 19:09:41 by cade-mou          #+#    #+#             */
/*   Updated: 2026/05/22 19:19:44 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb >= 2 && nb <= 12)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	if (nb >= 0 && nb <= 12)
		return (1);
	else
		return (0);
}
