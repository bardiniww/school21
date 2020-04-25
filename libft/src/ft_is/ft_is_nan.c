#include "libft.h"

int	ft_is_nan(long double d)
{
	return ((d != d) || (((d) < 0) == ((d) >= 0)));
}
