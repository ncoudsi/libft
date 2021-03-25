/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_uppercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 12:34:24 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 12:34:26 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Checking if a character is an upper case alphabetic.
*/

t_bool	ft_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (true);
	return (false);
}
