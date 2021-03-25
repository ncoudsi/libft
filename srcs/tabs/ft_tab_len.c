/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:42:21 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:42:30 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Calculating the number of entries in a 2 dimensions array.
*/

size_t	ft_tab_len(void **tab)
{
	size_t	result;

	result = 0;
	if (tab == NULL)
		return (0);
	while (tab[result] != NULL)
		result++;
	return (result);
}
