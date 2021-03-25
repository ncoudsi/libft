/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_iter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:10:06 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:10:50 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Applying a function to all the list's datas.
*/

void	ft_list_iter(t_list_node *list, void (*function)(void *))
{
	if (list == NULL)
		return ;
	while (list->next != NULL)
	{
		(*function)(list->data);
		list = list->next;
	}
	(*function)(list->data);
}
