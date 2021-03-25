/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:00:39 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:01:21 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Printing a character in a file.
*/

void	ft_putchar_fd(int fd, char c)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}
