/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 07:09:35 by cade-mou          #+#    #+#             */
/*   Updated: 2026/06/23 13:59:02 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_pos;
	size_t	dest_len;
	size_t	i;

	i = 0;
	dest_pos = ft_strlen(dest);
	dest_len = ft_strlen(dest);
	if (size <= dest_pos)
		return (ft_strlen(src) + size);
	while (src[i] != '\0' && dest_pos < size - 1)
	{
		dest[dest_pos] = src[i];
		dest_pos++;
		i++;
	}
	dest[dest_pos] = '\0';
	return (dest_len + ft_strlen(src));
}
