/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 19:33:24 by cade-mou          #+#    #+#             */
/*   Updated: 2026/06/22 20:34:34 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s1, int c, size_t n)
{
	size_t			i;
	unsigned char	*s2;

	i = 0;
	s2 = (unsigned char *)s1;
	while (i < n)
	{
		s2[i] = c;
		i++;
	}
	return (s1);
}
