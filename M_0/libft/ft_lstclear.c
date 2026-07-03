/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 22:59:53 by cade-mou          #+#    #+#             */
/*   Updated: 2026/06/28 00:33:38 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **list, void (*del)(void*))
{
	if (!list || !del || !*list)
		return ;
	ft_lstclear(&(*list)-> next, del);
	ft_lstdelone(*list, del);
	*list = NULL;
	return ;
}
