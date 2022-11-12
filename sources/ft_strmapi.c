/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 13:28:31 by anonymous     #+#    #+#                 */
/*   Updated: 2022/10/14 13:28:31 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stddef.h>
#include"libft.h"
//#include<stdio.h>

/*
static char map_f(unsigned int pos, char to_modify)
{
   return (to_modify + pos + 4);
}
*/
char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	size_t	length;
	char	*new_str;

	if (! str || ! f)
		return (NULL);
	length = ft_strlen(str);
	new_str = (char *) malloc(length + 1);
	if (new_str == NULL)
		return (NULL);
	new_str[length] = '\0';
	while (length--)
		new_str[length] = f(length, str[length]);
	return (new_str);
}
/*
int main()
{
	char *tmp = "abcd";
	char (*fun_ptr)(unsigned int, char) = &map_f;
	//ft_strmapi(tmp, *fun_ptr);
    printf("%s\n", ft_strmapi(tmp, *fun_ptr));
    return (0);
}
*/