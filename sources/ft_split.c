/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fra <fra@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 01:45:24 by anonymous         #+#    #+#             */
/*   Updated: 2023/01/18 22:35:23 by fra              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	n_substr(char const *str, char char_split)
{
	size_t	cnt;
	size_t	reset;

	cnt = 0;
	reset = 1;
	while (*str)
	{
		if (*str != char_split && reset)
		{
			cnt++;
			reset = 0;
		}
		else if (*str == char_split)
			reset = 1;
		str++;
	}
	return (cnt);
}

static size_t	len_substr(char const *str, char char_split)
{
	size_t	length;

	length = 0;
	while (*str && *str++ != char_split)
		length++;
	return (length);
}

static void	*free_memory(char **to_free, size_t n_arr)
{
	size_t	i;

	i = 0;
	while (i < n_arr)
		free(to_free[i++]);
	free(to_free);
	return (NULL);
}

char	**ft_split(char const *str, char split)
{
	char	**matrix;
	char	*sub_str;
	size_t	index;

	if (! str)
		return (NULL);
	matrix = (char **) malloc ((n_substr(str, split) + 1) * sizeof(char *));
	if (! matrix)
		return (NULL);
	index = 0;
	while (*str)
	{
		if (*str != split)
		{
			sub_str = ft_substr(str, 0, len_substr(str, split));
			if (! sub_str)
				return (free_memory(matrix, index));
			matrix[index++] = sub_str;
			str += ft_strlen(sub_str) - 1;
		}
		str++;
	}
	matrix[index] = 0;
	return (matrix - n_substr(str, split));
}
