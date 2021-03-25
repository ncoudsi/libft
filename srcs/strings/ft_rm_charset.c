/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rm_charset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 14:20:01 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:21:45 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Counting the lenght of the string without the characters of
**	the charset and returning it.
*/

static int		len_without_charset(char *str, char *charset)
{
	int result;
	int index;

	result = 0;
	index = 0;
	if (str == NULL)
		return (result);
	while (str[index] != '\0')
	{
		if (ft_is_char_in_str(str[index], charset) == false)
			result++;
		index++;
	}
	return (result);
}

/*
**	Removing all characters of a charset of a string and returning
**	the cleaned string.
*/

char			*ft_rm_charset(char *str, char *charset)
{
	char	*result;
	int		index;
	int		result_index;

	if (str == NULL || charset == NULL)
		return (NULL);
	index = 0;
	result_index = 0;
	result = ft_strnew(len_without_charset(str, charset));
	if (result == NULL)
		return (NULL);
	while (str[index] != '\0')
	{
		if (ft_is_char_in_str(str[index], charset) == false)
		{
			result[result_index] = str[index];
			result_index++;
		}
		index++;
	}
	free(str);
	return (result);
}
