#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	if (n[i] == '\0')
		return ((char*)h);
	while (h[i] != '\0' && i < len)
	{
		k = i;
		j = 0;
		while (n[j] != '\0' && h[k] != '\0' && h[k] == n[j] && k < len)
		{
			j++;
			k++;
		}
		if (n[j] == '\0')
			return (&(((char*)h)[i]));
		i++;
	}
	return (NULL);
}
