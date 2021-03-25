/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:20:12 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 13:20:15 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Converting an integer value into a string filled with numerical characters
**	refering to the value, in an hexadecimal base.
*/

char		*ft_itoa_hexa(long long int nbr)
{
	char	*base;
	char	*result;

	base = "0123456789abcdef";
	result = ft_itoa_base(nbr, base);
	return (result);
}
