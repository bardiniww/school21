#include "libft.h"

char	*ft_strstr(const char *h, const char *n)
{
	int i;
	int j;
	int k;

	i = 0;
	if (n[i] == '\0')
		return ((char*)h);
	while (h[i] != '\0')
	{
		k = i;
		j = 0;
		while (n[j] != '\0' && h[k] != '\0' && h[k] == n[j])
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