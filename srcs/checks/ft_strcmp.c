/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:55:32 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:48:12 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Cheking if 2 strings are entirely similar.
*/

int	ft_strcmp(char *str1, char *str2)
{
	int	index;

	index = 0;
	if (str1 == NULL || str2 == NULL)
		return (2);
	while (str1[index] != '\0')
	{
		if (str1[index] != str2[index] && str1[index] - str2[index] < 0)
			return (-1);
		if (str1[index] != str2[index] && str1[index] - str2[index] > 0)
			return (1);
		index++;
	}
	return (0);
}
