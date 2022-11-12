/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 16:15:44 by faru          #+#    #+#                 */
/*   Updated: 2022/10/05 11:14:41 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include"libft.h"
//#include <string.h>
//#include <stdio.h>

void	*ft_memset(void *str, int to_write, size_t n)
{
	size_t			counter;
	char			*tmp_str;

	counter = 0;
	tmp_str = (char *) str;
	while (counter < n)
	{
		*(tmp_str + counter) = to_write;
		counter++;
	}
	return ((void *) tmp_str);
}
/*
int main()
{	
	char p1[7] = "asdasd";
	char p2[7] = "asdasd";
	memset(p1, -3, 5);
	ft_memset(p2, -3, 5);
	printf("std->%s\n", p1);
	printf("upd->%s\n", p2);
	return (0);
}
*/