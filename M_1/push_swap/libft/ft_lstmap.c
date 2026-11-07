/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 05:43:44 by cade-mou          #+#    #+#             */
/*   Updated: 2026/07/02 01:59:09 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*map_clear(t_list **lst, void (*del)(void *))
{
	ft_lstclear(lst, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *list, void *(*func)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;
	void	*temp;

	if (!list || !func || !del)
		return (NULL);
	new_list = NULL;
	while (list)
	{
		temp = func(list -> content);
		if (temp == NULL)
			return (map_clear(&new_list, del));
		node = ft_lstnew(temp);
		if (!node)
		{
			del(temp);
			return (map_clear(&new_list, del));
		}
		ft_lstadd_back(&new_list, node);
		list = list -> next;
	}
	return (new_list);
}
