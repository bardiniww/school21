#include "libft.h"

int	ft_is_inf(long double d)
{
	if ((ft_is_nan(d - d)) && 10 - d == -d && d > 0)
		return (1);
	else if ((ft_is_nan(d - d)) && 10 - d == -d && d < 0)
		return (-1);
	else
		return (0);
}
