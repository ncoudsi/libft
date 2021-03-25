/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:42:38 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:42:49 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Creating a new 2 dimensions array of size entries. Heap allocated.
*/

void	**ft_tab_new(int size)
{
	void	**result;
	int		index;

	result = (void **)malloc(sizeof(void *) * (size + 1));
	if (result == NULL)
		return (NULL);
	index = 0;
	while (index < size)
	{
		result[index] = NULL;
		index++;
	}
	result[index] = NULL;
	return (result);
}
