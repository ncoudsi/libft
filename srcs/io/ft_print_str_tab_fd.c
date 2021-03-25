/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str_tab_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:54:07 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:01:38 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Printing a 2 dimensions characters array in a file. Note that user can
**	define a name for the array. Otherwise, set NULL as the second parameter.
*/

void	ft_print_str_tab_fd(int fd, char *name, char **tab)
{
	size_t	index;

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
	while (tab != NULL && tab[index] != NULL)
	{
		ft_putnbr_fd(fd, index);
		ft_putstr_fd(fd, "--->[");
		ft_putstr_fd(fd, tab[index]);
		ft_putstr_fd(fd, "]\n");
		index++;
	}
	ft_putstr_fd(fd, "-----===-----\n");
}
