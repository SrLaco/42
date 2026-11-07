/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 14:07:12 by cade-mou          #+#    #+#             */
/*   Updated: 2026/06/26 14:48:03 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*func)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		func(i, &str[i]);
		i++;
	}
}
