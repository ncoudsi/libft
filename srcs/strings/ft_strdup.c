/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:30:19 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:30:44 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Copying the characters of src string in a new string. Note that we allocate
**	memory for the new string before copying.
*/

char	*ft_strdup(char *src)
{
	int		index;
	int		len;
	char	*result;

	if (src == NULL)
		return (NULL);
	len = ft_strlen(src);
	result = ft_strnew(len);
	if (result == NULL)
		return (NULL);
	index = 0;
	while (index < len)
	{
		result[index] = src[index];
		index++;
	}
	return (result);
}
