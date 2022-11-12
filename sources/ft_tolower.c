/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 11:16:02 by faru          #+#    #+#                 */
/*   Updated: 2022/10/12 13:53:38 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
//#include <ctype.h>

int	ft_tolower(int to_low)
{
	return (to_low + ('a' - 'A') * (to_low >= 'A' && to_low <= 'Z'));
}
/*
int main()
{
	printf("%d\n", ft_tolower(-12334));
	printf("%d\n", tolower(-12334));
	return (0);
}
*/