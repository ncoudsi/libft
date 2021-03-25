/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int_tab_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:50:24 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:01:50 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Printing a 2 dimensions integers array in a file. Note that user can
**	define a name for the array. Otherwise, set NULL as the second parameter.
*/

void	ft_print_int_tab_fd(int fd, char *name, int *tab, size_t len)
{
	size_t		index;

	index = 0;
	if (fd < 0 || tab == NULL)
		return ;
	if (name != NULL)
	{
		ft_putchar_fd(fd, '{');
		ft_putstr_fd(fd, name);
		ft_putstr_fd(fd, "}\n");
	}
	ft_putstr_fd(fd, "-----===-----\n");
	while (tab && index < len)
	{
		ft_putnbr_fd(fd, index);
		ft_putstr_fd(fd, "--->[");
		ft_putnbr_fd(fd, tab[index]);
		ft_putstr_fd(fd, "]\n");
		index++;
	}
	ft_putstr_fd(fd, "-----===-----\n");
}
