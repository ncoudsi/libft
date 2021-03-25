/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float_round.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:17:23 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:17:45 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Returning a rounded value of a floating point.
*/

float	ft_float_round(float value)
{
	float	floor;
	float	roof;

	floor = ft_float_floor(value);
	roof = ft_float_roof(value);
	if ((value - floor) < (roof - value))
		return (floor);
	return (roof);
}
