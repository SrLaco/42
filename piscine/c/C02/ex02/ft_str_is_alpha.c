/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 01:17:56 by cade-mou          #+#    #+#             */
/*   Updated: 2026/04/18 19:55:25 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			i++;
		else
		{
			if (str[i] <= 'Z' && str[i] >= 'A')
				i++;
			else
				return (0);
		}
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_alpha("Hello World"));
// 	printf("%d\n", ft_str_is_alpha("HELLO"));
// 	printf("%d\n", ft_str_is_alpha("world"));
// 	printf("%d\n", ft_str_is_alpha("42"));
// 	printf("%d\n", ft_str_is_alpha("\n"));
// 	printf("%d\n", ft_str_is_alpha(""));
// }
