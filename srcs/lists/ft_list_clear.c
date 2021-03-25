/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:09:46 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:09:47 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Apply the destructor function to all the datas and free each nodes.
*/

void	ft_list_clear(t_list_node **list, void (*destructor)(void*))
{
	t_list_node *tmp;

	if (*list == NULL)
		return ;
	while (*list != NULL)
	{
		tmp = *list;
		if (destructor != NULL)
			(*destructor)(tmp->data);
		*list = tmp->next;
		free(tmp);
	}
}
