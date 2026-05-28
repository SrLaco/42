/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 09:52:51 by cade-mou          #+#    #+#             */
/*   Updated: 2026/04/12 10:45:37 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_strlen(char *str)
{
	int	i;
	char	a;
	char	b;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i <= 9)
	{
		a = (i/10) + 48;
		b = (i%10) + 48;
		write(1, &a, 1);
		write(1, &b, 1);
	}
}

int	main(void)
{
	char	*c;

	c = "Hello World";
	ft_strlen(c);
}
