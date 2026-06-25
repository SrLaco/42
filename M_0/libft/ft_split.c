/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 22:59:54 by cade-mou          #+#    #+#             */
/*   Updated: 2026/06/25 03:51:12 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *str, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[i] == '\0')
	{
		if ((str[i] != c && str[i - 1] == c) && i > 0)
			j++;
		i++;
	}
	return (j);
}

static char	*set_next_line(const char **str, char c)
{
	char	*current_word;
	char	*word_len;

	while (**str == c)
		(*str)++;
	if (**str == '\0')
		return (NULL);
	word_len = ft_strchr(*str, (int)c);
	current_word = ft_substr(*str, 0, word_len);
	if (!current_word)
		return (NULL);
	while (**str != c && **str != '\0')
		(*str)++;
	return (current_word);
}

static void	ft_free(char **split, int i)
{
	while (i >= 0)
	{
		i--;
		free(split[i]);
	}
	return ;
}

char	**ft_split(char const *str, char c)
{
	char	**split;
	size_t	w_count;
	size_t	i;

	w_count = word_count(str, c);
	split = malloc((1 + w_count) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	i = 0;
	while (i < w_count)
	{
		split[i] = set_next_line(&str, c);
		if (!split[i])
			ft_free(split, i);
		i++;
	}
	split[i] = NULL;
	return (split);
}
