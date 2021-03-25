/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_only_digits.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 12:34:17 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 12:34:19 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Checking in a string if all the characters are digits.
*/

t_bool	ft_is_only_digits(char *str)
{
	size_t index;

	index = 0;
	if (str == NULL)
		return (false);
	while (str[index] != '\0')
	{
		if (ft_is_digit(str[index]) == false)
			return (false);
		index++;
	}
	return (true);
}
