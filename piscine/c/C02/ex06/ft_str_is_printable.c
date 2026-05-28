/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 16:25:05 by cade-mou          #+#    #+#             */
/*   Updated: 2026/04/19 02:07:34 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_printable("Hello World"));
// 	printf("%d\n", ft_str_is_printable("HELLO"));
// 	printf("%d\n", ft_str_is_printable("world"));
// 	printf("%d\n", ft_str_is_printable("42"));
// 	printf("%d\n", ft_str_is_printable("\n"));
// 	printf("%d\n", ft_str_is_printable(""));
// }
