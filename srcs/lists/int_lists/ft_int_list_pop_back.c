/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_list_pop_back.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:05:20 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/12 12:45:14 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Remove the last node of an int list.
*/

void	ft_int_list_pop_back(t_int_list_node **list)
{
	t_int_list_node	*start;
	t_int_list_node	*tmp;

	if (list != NULL && *list != NULL)
	{
		start = *list;
		while ((*list)->next != NULL)
		{
			tmp = *list;
			*list = (*list)->next;
		}
		if (*list != start)
		{
			free(*list);
			tmp->next = NULL;
			*list = start;
		}
		else
		{
			free(*list);
			*list = NULL;
		}
	}
}
