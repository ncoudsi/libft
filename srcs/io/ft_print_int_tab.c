/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:52:41 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 13:52:42 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Printing a 2 dimensions integers array. Note that user can
**	define a name for the array. Otherwise, set NULL as the second parameter.
*/

void	ft_print_int_tab(char *name, int *tab, size_t len)
{
	size_t		index;

	index = 0;
	if (tab == NULL)
		return ;
	if (name != NULL)
	{
		ft_putchar('{');
		ft_putstr(name);
		ft_putstr("}\n");
	}
	ft_putstr("-----===-----\n");
	while (tab != NULL && index < len)
	{
		ft_putnbr(index);
		ft_putstr("--->[");
		ft_putnbr(tab[index]);
		ft_putstr("]\n");
		index++;
	}
	ft_putstr("-----===-----\n");
}
