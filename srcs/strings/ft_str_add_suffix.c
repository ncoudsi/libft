/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_add_suffix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:29:30 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:29:31 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Adding a suffix to a string. Free the old string, re-allocate the new one.
*/

void	ft_str_add_suffix(char **str, char *suffix)
{
	char	*tmp;

	if (suffix == NULL)
		return ;
	tmp = ft_strdup(*str);
	free(*str);
	*str = ft_strjoin(tmp, suffix);
	free(tmp);
}
