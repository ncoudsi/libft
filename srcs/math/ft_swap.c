/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 17:18:37 by ldutriez          #+#    #+#             */
/*   Updated: 2021/03/25 14:19:00 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Thoses functions will use the XOR bit operator
**	to swap two integers values.
*/

void	ft_swap_int(int *x, int *y)
{
	if (x == NULL || y == NULL)
		return ;
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}

void	ft_swap_char(char *x, char *y)
{
	if (x == NULL || y == NULL)
		return ;
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}
