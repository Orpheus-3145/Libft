/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_number.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: fra <fra@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/04 18:58:56 by fra           #+#    #+#                 */
/*   Updated: 2023/03/04 22:34:14 by fra           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int check_decimal(char *n)
{
	size_t i;

	i = 0;
	while (n[i])
	{
        if ((n[i] == '.') || (n[i] == ','))
			i++;
		if (! n[i] || ! ft_isdigit(n[i]))
			return (0);
		i++;
	}
    return (i && (i == ft_strlen(n)));
}

int check_hexa(char *n)
{
	size_t i;

	i = 0;
	while (n[i])
	{
        if ((n[i] == '.') || (n[i] == ','))
			i++;
		if (! ft_memcmp(n + i, "0x", 2) || ! ft_memcmp(n + i, "0X", 2))
			i += 2;
		if (! n[i] || ! ft_ishexadigit(n[i]))
			return (0);
		i++;
	}
    return (i && (i == ft_strlen(n)));
}

int	ft_is_number(char *n)
{
	int		i;
	char	*exa_small;
	char	*exa_capital;
	
	if (! n)
		return (0);
	i = 0;
	if (ft_count_occ(n, '.') + ft_count_occ(n, ',') > 1)
		return (0);
	else if (n[i] == '+' || n[i] == '-')
		n++;
	exa_small = ft_strnstr(n, "0x", ft_strlen(n));
	exa_capital = ft_strnstr(n, "0X", ft_strlen(n));
	if (exa_small && exa_capital)
		return (0);
	else if (exa_small && ft_strnstr(exa_small + 1, "0x", ft_strlen(exa_small)))
		return (0);
	else if (exa_capital && ft_strnstr(exa_capital + 1, "0x", ft_strlen(exa_capital)))
		return (0);
	else if (exa_small || exa_capital)
		return (check_hexa(n));
	else
		return (check_decimal(n));
}
