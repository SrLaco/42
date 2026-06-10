/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 07:09:35 by cade-mou          #+#    #+#             */
/*   Updated: 2026/06/09 23:24:41 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t nb)
{
	int				i;
	unsigned int	j;

	j = 0;
	i = ft_strlen(dest);
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + 1);
}

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	dest[524288] = "Hello ";
// 	printf("%zu\n", ft_strlcat(dest, "algebra", 7));
// 	printf("%zu\n", strlcat(dest, "algebra", 7));
// }