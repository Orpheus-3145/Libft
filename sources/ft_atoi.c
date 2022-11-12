/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 12:00:19 by faru          #+#    #+#                 */
/*   Updated: 2022/10/20 18:57:58 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include"libft.h"

static int	is_space(char c)
{
	return (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32);
}

int	ft_atoi(const char *str)
{
	int		sign;
	int		nbr;

	nbr = 0;
	sign = 1;
	while (is_space(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
		nbr = (nbr * 10) + (*str++ - '0');
	return (nbr * sign);
}

// int main()
// {
// 	printf("|1234|\t%d\n", atoi("1234"));
// 	printf("|1234|\t%d\n\n", ft_atoi("1234"));
// 	printf("| +1234   |\t%d\n", atoi(" +1234"));
// 	printf("| +1234   |\t%d\n\n", ft_atoi(" +1234"));
// 	printf("|  1234 |\t%d\n", atoi("  1234"));
// 	printf("|  1234 |\t%d\n\n", ft_atoi("  1234"));
// 	printf("| //1234|\t%d\n", atoi("abc"));
// 	printf("| //1234|\t%d\n\n", ft_atoi("abc"));
// 	printf("| . 1234|\t%d\n", atoi(" . 1234"));
// 	printf("| . 1234|\t%d\n\n", ft_atoi(" . 1234"));
// 	printf("|-214748364793453459|\t%d\n", atoi("-214748364793453459"));
// 	printf("|-214748364793453459|\t%d\n\n", ft_atoi("-214748364793453459"));
// 	printf("|1234bc |\t%d\n", atoi("1234bc"));
// 	printf("|1234bc |\t%d\n\n", ft_atoi("1234bc"));
// 	printf("|12d34  |\t%d\n", atoi("12d34"));
// 	printf("|12d34  |\t%d\n\n", ft_atoi("12d34"));
// 	printf("| +asd  |\t%d\n", atoi(" +asd"));
// 	printf("| +asd  |\t%d\n\n", ft_atoi(" +asd"));
// 	printf("| -asd  |\t%d\n", atoi(" -asd"));
// 	printf("| -asd  |\t%d\n\n", ft_atoi(" -asd"));
// 	printf("| - 3   |\t%d\n", atoi(" - 3"));
// 	printf("| - 3   |\t%d\n\n", ft_atoi(" - 3"));
// 	printf("| -123  |\t%d\n", atoi(" -123"));
// 	printf("| -123  |\t%d\n\n", ft_atoi(" -123"));
// 	printf("| +45   |\t%d\n", atoi(" +45"));
// 	printf("| +45   |\t%d\n\n", ft_atoi(" +45"));
// 	printf("| 0|\t%d\n", atoi(" 0"));
// 	printf("| 0|\t%d\n\n", ft_atoi(" 0")); 
// 	printf("|2147483647|\t%d\n", atoi("2147483647"));
// 	printf("|2147483647|\t%d\n\n", ft_atoi("2147483647")); 
// 	printf("|-2147483648|\t%d\n", atoi("-2147483648"));
// 	printf("|-2147483648|\t%d\n\n", ft_atoi("-2147483648")); 
// 	printf("|2147483648|\t%d\n", atoi("2147483648"));
// 	printf("|2147483648|\t%d\n\n", ft_atoi("2147483648")); 
// 	printf("|-2147483649|\t%d\n", atoi("-2147483649"));
// 	printf("|-2147483649|\t%d\n\n", ft_atoi("-2147483649"));
// 	printf("| |\t%d\n", atoi(" "));
// 	printf("| |\t%d\n\n", ft_atoi(" "));
// 	printf("||\t%d\n", atoi(""));
// 	printf("||\t%d\n\n", ft_atoi(""));
// 	printf("|abc|\t%d\n", atoi("abc"));
// 	printf("|abc|\t%d\n\n", ft_atoi("abc"));
// 	char *v = NULL;
// 	printf("std: %d\n", atoi(v));
// 	printf("upd: %d\n", ft_atoi(v));
// 	return (0);
// }