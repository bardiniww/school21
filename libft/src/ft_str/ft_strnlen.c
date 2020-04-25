#include "libft.h"

int	ft_strnlen(const char *s, int n)
{
	int i;

	i = 0;
	while (s[i] != '\0' && i < n)
		i++;
	return (i);
}
