/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_list_pop_front.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:41:01 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/12 12:48:49 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Remove the first node of an int list.
*/

void	ft_int_list_pop_front(t_int_list_node **list)
{
	t_int_list_node	*to_pop;

	if (list != NULL && *list != NULL)
	{
		to_pop = *list;
		*list = (*list)->next;
		free(to_pop);
	}
}
