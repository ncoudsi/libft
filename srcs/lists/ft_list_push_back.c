/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_add_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:06:31 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:07:29 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Adding a node at the end of a linked list. See libft_list_node.h for further
**	informations on t_list_node structure.
*/

void	ft_list_push_back(t_list_node **list, t_list_node *node)
{
	t_list_node	*start;

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
