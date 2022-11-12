/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/09 02:47:05 by anonymous     #+#    #+#                 */
/*   Updated: 2022/10/20 19:08:23 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<fcntl.h>
#include"libft.h"
//#include<stdio.h>

void	ft_putendl_fd(char *str, int fd)
{
	if (str)
	{
		ft_putstr_fd(str, fd);
		ft_putchar_fd('\n', fd);
	}
}
/*
int main()
{
	int fd = open("test.txt", O_RDWR | O_CREAT);
	printf("%d\n", fd);
	if (fd == -1)
		printf("Error!");
	else
	{
		char *str = "Writing with new line.. ";
		ft_putendl_fd(str, fd);
		close(fd);
	}
	return (0);
}
*/