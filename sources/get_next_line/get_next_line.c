/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: fra <fra@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/23 05:50:00 by fra           #+#    #+#                 */
/*   Updated: 2023/02/27 04:58:29 by fra           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	find_nl_pos(char *str)
{
	int	nl_pos;

	nl_pos = 0;
	while (str[nl_pos] && str[nl_pos] != '\n')
		nl_pos++;
	if (! str[nl_pos])
		nl_pos = -1;
	return (nl_pos);
}

int	shift_chars(char *str)
{
	int	n_chars;
	int	i;

	n_chars = find_nl_pos(str);
	i = 1;
	if (n_chars != -1)
	{
		while (str[n_chars + i])
		{
			str[i - 1] = str[n_chars + i];
			i++;
		}
	}
	str[i - 1] = '\0';
	return (n_chars);
}

char	*append_str(char *old, char *buffer)
{
	size_t	len_old;
	size_t	len_right;
	char	*new_str;

	len_old = 0;
	while (old && old[len_old])
		len_old++;
	len_right = length_new_str(buffer);
	new_str = (char *) malloc((len_old + len_right + 1) * sizeof(char));
	if (! new_str)
		ft_raise_error("(gnl) Memory error", 0);
	else
	{
		new_str[len_old + len_right] = '\0';
		while (len_right--)
			new_str[len_old + len_right] = buffer[len_right];
		while (len_old--)
			new_str[len_old] = old[len_old];
	}
	ft_free_single((void **) &old);
	return (new_str);
}

int	length_new_str(char *buffer)
{
	int	len;
	int	nl_pos;

	nl_pos = find_nl_pos(buffer);
	if (nl_pos == -1)
	{
		len = 0;
		while (buffer[len])
			len++;
	}
	else
		len = nl_pos;
	return (len);
}

char	*get_next_line(int fd)
{
	char			*line;
	static char		buffer[BUFFER_SIZE + 1];
	ssize_t			chars_read;

	line = NULL;
	if (fd >= 0 && ! read(fd, buffer, 0))
	{
		chars_read = -2;
		while (1)
		{
			if (! *buffer)
				chars_read = read(fd, buffer, BUFFER_SIZE);
			if (chars_read == -1)
				break ;
			else if (! chars_read)
				return (line);
			else if (chars_read > 0)
				buffer[chars_read] = '\0';
			line = append_str(line, buffer);
			if (shift_chars(buffer) != -1)
				return (line);
		}
	}
	ft_raise_error("(gnl) File error", 0);
	return (ft_free_single((void **) &line));
}
