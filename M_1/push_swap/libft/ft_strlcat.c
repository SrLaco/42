/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 07:09:35 by cade-mou          #+#    #+#             */
/*   Updated: 2026/06/24 17:45:00 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d_pos;
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	i = 0;
	d_pos = ft_strlen(dest);
	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	if (size <= d_pos)
		return (s_len + size);
	while (src[i] != '\0' && d_pos < size - 1)
	{
		dest[d_pos] = src[i];
		d_pos++;
		i++;
	}
	dest[d_pos] = '\0';
	return (d_len + s_len);
}
