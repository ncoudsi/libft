/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_add_prefixe.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:29:23 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:29:24 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Adding a prefixe to a string. Free the old string, re-allocate the new one.
*/

void		ft_str_add_prefixe(char *prefixe, char **str)
{
	char	*tmp;

	if (prefixe == NULL)
		return ;
	tmp = ft_strdup(*str);
	free(*str);
	*str = ft_strjoin(prefixe, tmp);
	free(tmp);
}
