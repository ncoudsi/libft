/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:39:59 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:40:00 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Searching for the full needle string is found in the haystack string.
**	If needle is found, returns a pointer on haystack string, starting at
**	the first character of needle. If needle is not found, returns NULL.
*/

char	*ft_strstr(char *haystack, char *needle)
{
	return (ft_strnstr(haystack, needle, ft_strlen(haystack)));
}
