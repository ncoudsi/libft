/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:37:31 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:37:34 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Allocating memory for a new string of len lenght and filling it with '\0'.
*/

char	*ft_strnew(size_t len)
{
	char		*result;
	size_t		index;

	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	index = 0;
	while (index < len)
	{
		result[index] = '\0';
		index++;
	}
	result[index] = '\0';
	return (result);
}
