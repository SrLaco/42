/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 20:03:27 by cade-mou          #+#    #+#             */
/*   Updated: 2026/04/09 19:44:22 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_putchars(char a, char b, char c, char d);

void	ft_putchars(char a, char b, char c, char d)
{
	if (d == '9' && (c == '9' && (b == '8' && a == '9')))
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
	}
	else
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		write(1, ", ", 2);
	}
}

void	compress(char a, char b, char c, char d)
{
	while (d <= '9')
	{
		ft_putchars(a, b, c, d);
		d++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	while (a <= '9')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = '0';
			while (c <= '9')
			{
				d = c + 1;
				compress(a, b, c, d);
				c++;
			}
			b++;
		}
		a++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// }
