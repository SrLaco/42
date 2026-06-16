/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 03:18:18 by cade-mou          #+#    #+#             */
/*   Updated: 2026/06/16 20:43:50 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	big = ft_strchr(big, little[j]);
	if (ft_strcmp(big[i], little[j], sizeof(big)))
		return ((char *)big);
	return (NULL);
}

int	main(void)
{
	char	*s;
	char	*c;

	s = "teste";
	c = "este";
	printf("%s", ft_strnstr(s, c, 5));
	printf("%s", strnstr(s, c, 5));
}
