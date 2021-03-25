/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_alpha_num.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 12:33:47 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 12:33:49 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Checking if a character is rather numeric or alphabetic.
*/

t_bool	ft_is_alpha_num(char c)
{
	if (ft_is_digit(c) == true || ft_is_alpha(c) == true)
		return (true);
	return (false);
}
