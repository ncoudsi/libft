/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:29:56 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:30:09 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Allocating memory for a new string containing only c character.
**	Then returns the string.
*/

char	*ft_strdup_c(char c)
{
	char	*result;

	result = ft_strnew(1);
	if (result == NULL)
		return (NULL);
	result[0] = c;
	return (result);
}
