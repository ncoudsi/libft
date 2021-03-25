/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 12:34:05 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 12:34:06 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Checking if a character is numeric.
*/

t_bool	ft_is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (true);
	return (false);
}
