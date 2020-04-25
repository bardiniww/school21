#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*k;

	i = 0;
	k = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			k = &(((char*)s)[i]);
		i++;
	}
	if (c == '\0')
		k = &(((char*)s)[i]);
	return (k);
}
