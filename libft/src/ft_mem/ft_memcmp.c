#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1m;
	unsigned char	*s2m;

	i = 0;
	s1m = (unsigned char*)s1;
	s2m = (unsigned char*)s2;
	while (i < n)
	{
		if (s1m[i] != s2m[i])
			return (s1m[i] - s2m[i]);
		i++;
	}
	return (0);
}
