/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_lowercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 12:34:11 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 12:34:13 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Checking if a character is a lower case alphabetic.
*/

t_bool	ft_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (true);
	return (false);
}
