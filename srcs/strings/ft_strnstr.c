/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:38:06 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:38:49 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Searching for the full needle string is found in the haystack string, but
**	only checking len characters. If needle is found, returns a pointer on
**	haystack string, starting at the first character of needle. If needle is
**	not found, returns NULL.
*/

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	size_t	haystack_index;
	size_t	needle_index;

	haystack_index = 0;
	if (haystack == NULL || needle == NULL || ft_strlen(needle) == 0)
		return (NULL);
	while (haystack[haystack_index] != '\0' && haystack_index < len)
	{
		needle_index = 0;
		while (needle[needle_index] == haystack[haystack_index + needle_index]
		&& haystack_index + needle_index < len)
		{
			if (needle[needle_index + 1] == '\0')
				return (haystack + haystack_index);
			needle_index++;
		}
		haystack_index++;
	}
	return (NULL);
}
