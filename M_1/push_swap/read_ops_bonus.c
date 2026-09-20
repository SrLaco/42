/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_ops_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 14:44:03 by cade-mou          #+#    #+#             */
/*   Updated: 2026/09/20 14:44:03 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*grow(char *buf, int total, char *tmp, int n)
{
	char	*dst;
	int		i;

	dst = malloc(total + n + 1);
	if (!dst)
	{
		free(buf);
		return (NULL);
	}
	i = 0;
	while (i < total)
	{
		dst[i] = buf[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dst[total + i] = tmp[i];
	}
	free(buf);
	return (dst);
}

char *read_all(int fd)
{
	char	tmp[1024];
	char	*buf;
	int		total;
	int		n;

	total = 0;
	buf = malloc (1);
	if (!buf)
		return (NULL);
	n = read(fd, tmp, 1024);
	while (n > 0)
	{
		buf = grow(buf, total, tmp, n);
		if (!buf)
			return (NULL);
		total += n;
		n = read(fd, tmp, 1024);
	}
	if (n < 0)
	{
		free(buf);
		return (NULL);
	}
	buf[total] = '\0';
	return (buf);
}
