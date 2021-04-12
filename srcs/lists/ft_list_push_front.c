/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:09:53 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/12 11:35:11 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Adding a node at the start of a linked list. See libft_list.h
**	for further informations on t_list_node structure.
*/

void	ft_list_push_front(t_list_node **list, t_list_node *node)
{
	if (list == NULL || node == NULL)
		return ;
	node->next = *list;
	*list = node;
}
