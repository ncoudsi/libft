/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_int_node.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 11:23:23 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/04/12 11:29:40 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Allocating memory for a t_int_list_node pointer and filling it with data.
**	Then returns the t_int_list_node pointer.
*/

t_int_list_node	*ft_malloc_int_node(int data)
{
	t_int_list_node	*result;

	result = (t_int_list_node *)malloc(sizeof(t_int_list_node));
	if (result == NULL)
		return (NULL);
	result->data = data;
	result->next = NULL;
	return (result);
}
