/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 01:45:24 by anonymous     #+#    #+#                 */
/*   Updated: 2022/10/21 18:45:40 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
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
/*
int main()
{
	//char *stringa = "asdad|dssdsdf|sdfds";
	//char sep = '|';
	//printf("token: |%s|\n", strtok("          ", " "));
	char **mtx = ft_split("          ", ' ');
	int cnt = 0;
	if (mtx)
	{
		while (cnt < 1)
			printf("|%s|\n", mtx[cnt++]);
		return (0);
	}
}
*/