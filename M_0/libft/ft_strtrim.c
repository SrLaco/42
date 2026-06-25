/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 19:26:42 by cade-mou          #+#    #+#             */
/*   Updated: 2026/06/24 22:54:57 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	i;
	size_t	l;
	size_t	size;
	char	*str;

	if (s == NULL || set == NULL)
		return (NULL);
	i = 0;
	l = ft_strlen(s);
	if (l == 0)
		return (ft_strdup(""));
	while (s[i] != '\0' && ft_strchr(set, s[i]))
	i++;
	while (l > i && ft_strchr(set, s[l - 1]))
	l--;
	size = l - i;
	str = malloc(sizeof(char) * (size + 1));
	if (str)
	{
		str = ft_memcpy(str, s + i, size);
		str[size] = '\0';
		return (str);
	}
	return (NULL);
}
