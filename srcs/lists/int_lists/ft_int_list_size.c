/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_list_size.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 11:36:41 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/12 11:38:06 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Counting the number of nodes in a int_list and returning it.
*/

int	ft_int_list_size(t_int_list_node *list)
{
	int		result;

	if (list == NULL)
		return (0);
	result = 1;
	while (list->next != NULL)
	{
		list = list->next;
		result++;
	}
	return (result);
}
