/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 03:38:43 by cade-mou          #+#    #+#             */
/*   Updated: 2026/06/08 17:47:24 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_isalnum('H'));
// 	printf("%d\n", ft_isalnum('w'));
// 	printf("%d\n", ft_isalnum('4'));
// 	printf("%d\n", ft_isalnum('\n'));
// 	printf("%d\n", ft_isalnum('\0'));
// }
