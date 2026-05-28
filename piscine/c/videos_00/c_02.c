/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 02:14:52 by cade-mou          #+#    #+#             */
/*   Updated: 2026/04/17 15:23:59 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_unsigned(void)
{
	unsigned int	i;
	short int		j;
	long int		k;
	char			*a[524288];

	printf("%lu\n", sizeof(i));
	printf("%lu\n", sizeof(j));
	printf("%lu\n", sizeof(k));
	printf("%lu\n", sizeof(a));
}

int	main(void)
{
	char	c;
	int		i;
	float	f;
	double	d;

	c = '*';
	f = 42.21;
	printf("%lu, %d, %c\n", sizeof(c), c, c);
	printf("%lu\n", sizeof(i));
	printf("%lu, %f\n", sizeof(f), f);
	printf("%lu\n", sizeof(d));

	ft_unsigned();
}
