/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:17:37 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 13:18:32 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Converting numericals characters in a string into an integer. Skip all the
**	spaces at the start of the string and accept one sign ('+' or '-'), then
**	take only numericals characters. As soon as we encounter a non numerical
**	character, we retrun the actual value of result.
*/

int	ft_atoi(char *str)
{
	int	result;
	int	index;
	int	sign;

	result = 0;
	index = 0;
	sign = 1;
	if (str == NULL)
		return (result);
	while (str[index] == ' ')
		index++;
	if (str[index] == '+')
		index++;
	else if (str[index] == '-')
	{
		index++;
		sign *= -1;
	}
	while (str[index] != '\0' && (str[index] >= '0' && str[index] <= '9'))
	{
		result = (result * 10) + (str[index] - '0');
		index++;
	}
	return (result * sign);
}
