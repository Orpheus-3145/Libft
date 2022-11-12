/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 17:23:32 by faru          #+#    #+#                 */
/*   Updated: 2022/11/02 17:42:44 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include"libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	lenght;

	lenght = 0;
	while (*str++)
		lenght++;
	return (lenght);
}
/*
int main()
{
	printf("%d\n", strlen(NULL));
	return (0);
}
*/