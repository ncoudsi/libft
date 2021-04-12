/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_list_remove_node.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 11:43:31 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/12 12:48:28 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Removes a specific node from an int_list.
*/

void	ft_int_list_remove_node(t_int_list_node **list,
													t_int_list_node *to_remove)
{
	t_int_list_node *tmp;

	tmp = *list;
	if (list != NULL && *list != NULL && to_remove != NULL)
	{
		if (*list == to_remove)
		{
			*list = to_remove->next;
			free(to_remove);
		}
		else
		{
			while (tmp->next != NULL && tmp->next != to_remove)
				tmp = tmp->next;
			if (tmp->next != NULL)
				tmp->next = tmp->next->next;
			free(to_remove);
		}
	}
}
