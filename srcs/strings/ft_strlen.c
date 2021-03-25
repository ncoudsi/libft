/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:37:24 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:37:25 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Counting the lenght of a string and returning it.
*/

size_t		ft_strlen(char *src)
{
	size_t	result;

	result = 0;
	if (src == NULL)
		return (0);
	while (src[result] != '\0')
		result++;
	return (result);
}
