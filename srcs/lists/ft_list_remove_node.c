/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_node.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:12:56 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:14:25 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Removing a node and its content.
*/

static void	deleting(t_list_node *to_remove, void (*destructor)(void *))
{
	if (to_remove == NULL)
		return ;
	if (destructor != NULL)
		destructor(to_remove->data);
	free(to_remove);
	to_remove = NULL;
}

/*
**	Removing a node of a list (specified by node_index), and reforming the
**	list.
*/

void		ft_list_remove_node(t_list_node **list, size_t node_index,
		void (*destructor)(void*))
{
	t_list_node *tmp1;
	t_list_node *tmp2;

	if (list == NULL || *list == NULL)
		return ;
	tmp1 = *list;
	tmp2 = tmp1->next;
	if (node_index == 0)
	{
		*list = tmp2;
		deleting(tmp1, destructor);
		return ;
	}
	while (node_index > 1 && tmp1->next != NULL)
	{
		tmp1 = tmp2;
		tmp2 = tmp1->next;
		node_index--;
	}
	if (node_index > 1)
		return ;
	tmp1->next = tmp2->next;
	deleting(tmp2, destructor);
	return ;
}
