/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 17:39:02 by cade-mou          #+#    #+#             */
/*   Updated: 2026/06/24 19:52:15 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *dest, char const *src)
{
	size_t	s;
	size_t	d;
	size_t	l;
	char	*str;

	if (src == NULL || dest == NULL)
		return (NULL);
	d = ft_strlen(dest);
	s = ft_strlen(src);
	l = s + d + 1;
	str = malloc(sizeof(char) * l);
	if (str)
	{
		ft_strlcpy(str, dest, l);
		ft_strlcat(str, src, l);
		return (str);
	}
	return (NULL);
}
