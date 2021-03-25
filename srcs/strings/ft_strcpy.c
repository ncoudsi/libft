/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:29:08 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:29:10 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Copying the characters of src string in dest string. Returns dest after the
**	copy. Note that we do not proceed to any memory allocation.
*/

char	*ft_strcpy(char *src, char *dest)
{
	int	index;

	index = 0;
	if (src == NULL || dest == NULL)
		return (NULL);
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
