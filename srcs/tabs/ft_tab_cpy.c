/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_cpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:42:04 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:42:13 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Copy the entries of a 2 dimensions array in another one.
*/

void	ft_tab_cpy(void **dst, void **src)
{
	int	index;

	index = 0;
	if (dst == NULL || src == NULL)
		return ;
	while (src[index] != NULL)
	{
		dst[index] = src[index];
		index++;
	}
}
