/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 17:48:13 by augusto           #+#    #+#             */
/*   Updated: 2026/04/05 22:24:36 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	line;
	int	column;

	if (x <= 0 || y <= 0)
		return ;
	line = 1;
	while (line <= y)
	{
		column = 1;
		while (column <= x)
		{
			if ((line == 1 && column == 1) || (line == y && column == 1))
				ft_putchar('A');
			else if ((line == 1 && column == x) || (line == y && column == x))
				ft_putchar('C');
			else if ((line == 1 || line == y) || (column == 1 || column == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
