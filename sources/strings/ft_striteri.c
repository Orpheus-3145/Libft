/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/08 23:58:24 by anonymous     #+#    #+#                 */
/*   Updated: 2022/10/11 12:29:05 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stddef.h>
#include"libft.h"
//#include<stdio.h>
/*
void map_f(unsigned int pos, char *to_modify)
{
    *to_modify = '&';
}
*/
void	ft_striteri(char *str, void (*f)(unsigned int, char*))
{
	size_t	length;

	if (str && f)
	{
		length = ft_strlen(str);
		str[length] = '\0';
		while (length--)
			f(length, str + length);
	}
}
/*
int main()
{   
    char stringa[6] = "rfdes";
    ft_striteri(stringa, *map_f);
    printf("|%s|\n", stringa);
    return (0);
}
*/