/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 18:47:03 by cade-mou          #+#    #+#             */
/*   Updated: 2026/04/18 19:54:58 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			i++;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_lowercase("Hello World"));
// 	printf("%d\n", ft_str_is_lowercase("HELLO"));
// 	printf("%d\n", ft_str_is_lowercase("world"));
// 	printf("%d\n", ft_str_is_lowercase("42"));
// 	printf("%d\n", ft_str_is_lowercase("\n"));
// 	printf("%d\n", ft_str_is_lowercase(""));
// }
