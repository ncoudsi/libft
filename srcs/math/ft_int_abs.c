/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_abs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:18:01 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:18:03 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Returning an absolute value of an integer.
*/

int		ft_int_abs(int value)
{
	if (value == 0)
		return (0);
	if (value < 0)
		value *= -1;
	return (value);
}
