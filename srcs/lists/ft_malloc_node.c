/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:15:24 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:15:55 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Allocating memory for a t_list_node pointer and filling it with data.
**	Then returns the t_list_node pointer.
*/

t_list_node	*ft_malloc_node(void *data)
{
	t_list_node	*result;

	result = (t_list_node *)malloc(sizeof(t_list_node));
	if (result == NULL)
		return (NULL);
	result->data = data;
	result->next = NULL;
	return (result);
}
