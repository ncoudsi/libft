/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_count_c.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:29:02 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:29:03 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Counting the number of itterations of c character in str string.
*/

int	ft_str_count_c(char *str, char c)
{
	int	result;
	int	index;

	result = 0;
	index = 0;
	if (str == NULL)
		return (0);
	while (str[index] != '\0')
	{
		if (str[index] == c)
			result++;
		index++;
	}
	return (result);
}
