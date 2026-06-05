/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 02:52:56 by cade-mou          #+#    #+#             */
/*   Updated: 2026/05/29 03:27:42 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_isalpha('H'));
// 	printf("%d\n", ft_isalpha('w'));
// 	printf("%d\n", ft_isalpha('4'));
// 	printf("%d\n", ft_isalpha('\n'));
// 	printf("%d\n", ft_isalpha('\0'));
// }
