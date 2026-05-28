/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 19:18:39 by cade-mou          #+#    #+#             */
/*   Updated: 2026/04/18 19:56:18 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 90 && str[i] >= 65)
			i++;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_uppercase("Hello World"));
// 	printf("%d\n", ft_str_is_uppercase("HELLO"));
// 	printf("%d\n", ft_str_is_uppercase("world"));
// 	printf("%d\n", ft_str_is_uppercase("42"));
// 	printf("%d\n", ft_str_is_uppercase("\n"));
// 	printf("%d\n", ft_str_is_uppercase(""));
// }
