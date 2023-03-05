/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_xatof.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: fra <fra@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/05 04:22:45 by fra           #+#    #+#                 */
/*   Updated: 2023/03/05 04:45:16 by fra           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	ft_xatof(const char *str_n)
{
	int		i;
	float	nbr;
	int		sign;
	int		comma_pos;

	i = 0;
	nbr = 0;
	sign = 1;
	comma_pos = -1;
	while (ft_isspace(str_n[i]))
		str_n++;
	if (str_n[i] == '-')
	{
		sign = -1;
		str_n++;
	}
	else if (str_n[i] == '+')
		str_n++;
	if (! ft_memcmp(str_n + i, "0x", 2))
		i += 2;
	while (ft_isdigit(str_n[i]))
		nbr = (nbr * 16) + ft_find_index("0123456789abcdef", str_n[i++]);
	if (str_n[i] == ',' || str_n[i] == '.')
	{
		comma_pos = i++;
		if (! ft_memcmp(str_n + i, "0x", 2))
		{
			i += 2;
			comma_pos += 2;
		}
	}
	while (ft_isdigit(str_n[i]))
		nbr = (nbr * 16) + ft_find_index("0123456789abcdef", str_n[i++]);
	nbr *= sign;
	if (comma_pos != -1)
		nbr *= ft_pow(16, comma_pos - i + 1);
	return (nbr);
}