/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoudsi <ncoudsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 13:37:09 by ncoudsi           #+#    #+#             */
/*   Updated: 2021/03/25 14:45:49 by ncoudsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Removing a line from storage, and keep the surplus.
*/

static void	remove_line_from_storage(char **storage)
{
	int		index;
	char	*tmp;
	int		new_len;

	index = 0;
	tmp = *storage;
	while (tmp[index] != '\0' && tmp[index] != '\n')
		index++;
	new_len = ft_strlen(tmp) - index - 1;
	if (new_len <= 0)
		*storage = NULL;
	else
		*storage = ft_strsub(tmp, index + 1, new_len);
	free(tmp);
}

/*
**	Creating a line from storage.
*/

static char	*set_line(char *storage)
{
	int		index;
	char	*result;

	index = 0;
	while (storage[index] != '\0' && storage[index] != '\n')
		index++;
	result = ft_strsub(storage, 0, index);
	return (result);
}

/*
**	Store a line in the storage variable.
*/

static int	store_line(char **storage, char *buf, int *read_ret, int fd)
{
	while (ft_is_char_in_str('\n', *storage) == false
		&& *read_ret != 0)
	{
		*read_ret = read(fd, buf, BUFFER_SIZE);
		if (*read_ret == -1)
			return (-1);
		ft_str_add_suffix(storage, buf);
	}
	free(buf);
	return (0);
}

/*
**	Getting the next line of a file and store it in a string. We consider a line
**	as an undefined number of characters terminated with '\n'. The function
**	returns 1 if a line has been found, 0 if the end of file has been reached,
**	or -1 if an error occured.
*/

int			ft_get_next_line(int fd, char **line)
{
	static char	*storage = NULL;
	char		*buffer;
	int			read_ret;

	if (line == NULL || fd < 0 || BUFFER_SIZE <= 0)
		return (-1);
	read_ret = 1;
	buffer = ft_strnew(BUFFER_SIZE);
	if (buffer != NULL &&
		store_line(&storage, buffer, &read_ret, fd) != -1)
	{
		*line = set_line(storage);
		remove_line_from_storage(&storage);
		if (read_ret == 0)
			return (0);
		return (1);
	}
	return (-1);
}
