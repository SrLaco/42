/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 12:59:46 by cade-mou          #+#    #+#             */
/*   Updated: 2026/07/02 01:30:22 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *str, char (*func)(unsigned int, char))
{
	size_t	i;
	char	*s;

	if (!str || !func)
		return (NULL);
	i = 0;
	s = malloc((ft_strlen(str) + 1) * sizeof(char));
	while (str[i])
	{
		s[i] = func(i, str[i]);
		i++;
	}
	s[i] = '\0';
	return (s);
}
