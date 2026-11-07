/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 00:40:58 by cade-mou          #+#    #+#             */
/*   Updated: 2026/06/28 00:52:25 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *list, void (*func)(void *))
{
	if (!list || !func)
		return ;
	while (list)
	{
		func(list -> content);
		list = list -> next;
	}
}
