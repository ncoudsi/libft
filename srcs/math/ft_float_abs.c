/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float_abs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:16:40 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:16:41 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Returning the absolute value of a floating point.
*/

float	ft_float_abs(float value)
{
	if (value == 0.0f)
		return (0.0f);
	if (value < 0.0f)
		value *= -1;
	return (value);
}
