/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 07:06:28 by cade-mou          #+#    #+#             */
/*   Updated: 2026/06/09 20:42:41 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

//#include <stdio.h>
//#include <string.h>
// int	main(void)
// {
// 	printf("%d\n", ft_strncmp("ALGEBRA", "algebra", 3));
// 	printf("%d\n", ft_strncmp("ova", "ovo", 2));
// 	printf("%d\n", ft_strncmp("zebra", "ZEBRA", 3));
// 	printf("%d\n", strncmp("ALGEBRA", "algebra", 3));
// 	printf("%d\n", strncmp("ova", "ovo", 2));
// 	printf("%d\n", strncmp("zebra", "ZEBRA", 3));
// }
