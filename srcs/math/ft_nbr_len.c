/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:18:09 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:18:11 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nbr_len(int nbr)
{
	size_t result;

	result = 1;
	if (nbr < 0)
		nbr *= -1;
	while (nbr >= 10)
	{
		nbr /= 10;
		result++;
	}
	return (result);
}
