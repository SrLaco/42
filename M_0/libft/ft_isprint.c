/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 04:01:39 by cade-mou          #+#    #+#             */
/*   Updated: 2026/06/09 20:42:44 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_isprint('H'));
// 	printf("%d\n", ft_isprint('w'));
// 	printf("%d\n", ft_isprint('4'));
// 	printf("%d\n", ft_isprint('\n'));
// 	printf("%d\n", ft_isprint('\0'));
// }
