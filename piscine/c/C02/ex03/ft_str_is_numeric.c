/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 17:53:18 by cade-mou          #+#    #+#             */
/*   Updated: 2026/04/18 19:55:18 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
// 	printf("%d\n", ft_str_is_numeric("Hello World"));
// 	printf("%d\n", ft_str_is_numeric("HELLO"));
// 	printf("%d\n", ft_str_is_numeric("world"));
// 	printf("%d\n", ft_str_is_numeric("42"));
// 	printf("%d\n", ft_str_is_numeric("\n"));
// 	printf("%d\n", ft_str_is_numeric(""));
// }
