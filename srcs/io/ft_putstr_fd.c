/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:03:15 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:44:49 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Printing a string in a file.
*/

void	ft_putstr_fd(int fd, char *str)
{
	if (str == NULL || fd < 0)
		return ;
	write(fd, str, ft_strlen(str));
}
