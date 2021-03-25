/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:10:59 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:46:32 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Applying a function to all the nodes of a list and returning a new list
**	with the new datas. If the function fails, destroy the new list and returns
**	NULL.
*/

t_list_node	*ft_list_map(t_list_node *list, void *(*function)(void *),
void (*destructor)(void *))
{
	t_list_node	*result;
	t_list_node	*new_node;

	if (list == NULL)
		return (NULL);
	result = ft_malloc_node((*function)(list->data));
	if (result == NULL)
		return (NULL);
	list = list->next;
	while (list != NULL)
	{
		new_node = ft_malloc_node((*function)(list->data));
		if (new_node == NULL)
		{
			ft_list_clear(&result, destructor);
			return (NULL);
		}
		ft_list_push_back(&result, new_node);
		list = list->next;
	}
	return (result);
}
