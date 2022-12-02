#include "libft.h"

size_t	ft_nbrlen(size_t nbr, int base)
{
	size_t	cnt;

	cnt = 0;
	if (! nbr)
		cnt++;
	while (nbr)
	{
		nbr /= base;
		cnt++;
	}
	return (cnt);
}
