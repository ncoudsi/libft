/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 12:33:53 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:43:57 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Checking if a character is alphabetic, upper or lower case.
*/

t_bool	ft_is_alpha(char c)
{
	if (ft_is_uppercase(c) == true || ft_is_lowercase(c) == true)
		return (true);
	return (false);
}
