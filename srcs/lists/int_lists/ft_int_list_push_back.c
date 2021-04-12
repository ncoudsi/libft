/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_list_push_back.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 11:30:13 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/12 12:42:53 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Adding a node at the end of a linked list. See libft_list.h for further
**	informations on t_int_list_node structure.
*/

void	ft_int_list_push_back(t_int_list_node **list, t_int_list_node *node)
{
	t_int_list_node	*start;

	start = *list;
	if (node == NULL || list == NULL)
		return ;
	if (*list == NULL)
	{
		*list = node;
		return ;
	}
	while ((*list)->next != NULL)
		(*list) = (*list)->next;
	(*list)->next = node;
	*list = start;
}
