/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 19:16:28 by cade-mou          #+#    #+#             */
/*   Updated: 2026/06/27 21:43:32 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*lst;

	if (!list || !new)
		return ;
	if (!*list)
	{
		*list = new;
		return ;
	}
	lst = ft_lstlast(*list);
	lst -> next = new;
	return ;
}
