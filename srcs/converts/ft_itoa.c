/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:20:36 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 13:20:38 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Converting an integer value into a string filled with numerical characters
**	refering to the value.
*/

char		*ft_itoa(long long int nbr)
{
	char	*base;
	char	*result;

	base = "0123456789";
	result = ft_itoa_base(nbr, base);
	return (result);
}
