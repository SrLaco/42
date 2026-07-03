/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 22:59:54 by cade-mou          #+#    #+#             */
/*   Updated: 2026/07/02 00:57:40 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *str, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (str[i] != '\0' && str[i] != c)
		j++;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
			j++;
		i++;
	}
	return (j);
}

static char	**free_sp(char **split, size_t j)
{
	while (j > 0)
	{
		j--;
		free(split[j]);
	}
	free(split);
	return (NULL);
}

static char	**set_words(const char *str, char c, char **split, size_t w_count)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (j < w_count && str[i])
	{
		while (str[i] == c)
			i++;
		start = i;
		while (str[i] != c && str[i])
			i++;
		split[j] = ft_substr(str, start, i - start);
		if (!split[j])
			return (free_sp(split, j));
		j++;
	}
	split[j] = NULL;
	return (split);
}

char	**ft_split(char const *str, char c)
{
	char	**split;
	size_t	w_count;

	if (!str)
		return (NULL);
	w_count = word_count(str, c);
	split = malloc((w_count + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	return (set_words(str, c, split, w_count));
}
