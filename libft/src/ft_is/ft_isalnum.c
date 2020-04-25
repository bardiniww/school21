#include "libft.h"

int		ft_isalnum(int c)
{
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122) || ('0' <= c && c <= '9'))
		return (1);
	return (0);
}
