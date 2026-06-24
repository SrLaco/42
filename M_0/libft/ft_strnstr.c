/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 03:18:18 by cade-mou          #+#    #+#             */
/*   Updated: 2026/06/23 21:26:58 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t size)
{
	size_t	i;
	size_t	l;
	char	*b;

	i = 0;
	l = ft_strlen(little);
	b = (char *)big;
	if (little[0] == '\0')
		return (b);
	while (big[i] != '\0')
	{
		b = (char *)&big[i];
		if (size < l || (i > (size - l)))
			break ;
		if (ft_strncmp(b, (char *)little, l) == 0 && *b == little[0])
			return (b);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*s;
// 	char	*c;

// 	s = "teste";
// 	c = "este";
// 	printf("%s", ft_strnstr(s, c, 5));
// 	printf("%s", strnstr(s, c, 5));
// }
