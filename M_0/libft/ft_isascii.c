/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 03:49:56 by cade-mou          #+#    #+#             */
/*   Updated: 2026/05/29 04:00:58 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= '\0' && c <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_isascii('H'));
// 	printf("%d\n", ft_isascii('w'));
// 	printf("%d\n", ft_isascii('4'));
// 	printf("%d\n", ft_isascii('\n'));
// 	printf("%d\n", ft_isascii('\0'));
// }
