/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_to_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:41:35 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:41:36 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Adding a an entry at the end of an 2 dimension array. Heap allocated.
*/

void	ft_add_to_tab(void *to_add, void ***tab)
{
	void	**tmp;

	if (to_add == NULL || tab == NULL)
		return ;
	tmp = *tab;
	*tab = ft_tab_new(ft_tab_len(tmp) + 1);
	if (tmp != NULL)
	{
		ft_tab_cpy(*tab, tmp);
		free(tmp);
	}
	(*tab)[ft_tab_len(*tab)] = to_add;
}
