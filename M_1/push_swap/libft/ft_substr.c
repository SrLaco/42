/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 20:38:31 by cade-mou          #+#    #+#             */
/*   Updated: 2026/06/24 17:23:14 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int n, size_t size)
{
	char	*dest;

	if (str == NULL)
		return (NULL);
	if (n >= ft_strlen(str))
		return (ft_strdup(""));
	dest = malloc(sizeof(char) * (size + 1));
	if (dest)
	{
		dest = (char *)ft_memcpy(dest, &str[n], size);
		dest[size] = '\0';
		return (dest);
	}
	return (NULL);
}
