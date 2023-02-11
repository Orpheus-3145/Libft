/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 18:35:45 by faru          #+#    #+#                 */
/*   Updated: 2022/10/20 18:59:36 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include"libft.h"
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>

void	ft_bzero(void *to_modify, size_t no_times)
{
	char	*chr_ptr;

	chr_ptr = (char *) to_modify;
	while (no_times--)
		*chr_ptr++ = '\0';
}

// int main()
// {
// 	char s1[9] = "sdfsddasd";
// 	char s2[9] = "sdfsddasd";
// 	bzero(s1, 5);
// 	ft_bzero(s2, 5);
// 	printf("src: %s\n", s1);
// 	printf("dst: %s\n", s2);
// 	return (0);
// }