/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:03:59 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:44:34 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Printing a string.
*/

void	ft_putstr(char *str)
{
	if (str == NULL)
		return ;
	write(1, str, ft_strlen(str));
}
