/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_char_in_str.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 12:33:59 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 12:34:01 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Checking if string contain to_find character. Returns true at the
**	first occurence, false if none is found.
*/

t_bool	ft_is_char_in_str(char to_find, char *str)
{
	int	index;

	index = 0;
	if (str == NULL)
		return (false);
	while (str[index] != '\0')
	{
		if (str[index] == to_find)
			return (true);
		index++;
	}
	return (false);
}
