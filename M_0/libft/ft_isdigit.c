/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 03:34:32 by cade-mou          #+#    #+#             */
/*   Updated: 2026/05/29 03:35:39 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_isdigit('H'));
// 	printf("%d\n", ft_isdigit('w'));
// 	printf("%d\n", ft_isdigit('4'));
// 	printf("%d\n", ft_isdigit('\n'));
// 	printf("%d\n", ft_isdigit('\0'));
// }