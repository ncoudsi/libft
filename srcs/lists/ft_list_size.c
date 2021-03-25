/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:14:51 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:15:52 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Counting the number of nodes in a list and returning it.
*/

int	ft_list_size(t_list_node *list)
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
