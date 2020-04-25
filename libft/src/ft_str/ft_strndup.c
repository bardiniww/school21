#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*res;
	size_t	i;

	if (!(res = (char*)malloc(ft_strnlen(s, n) + 1)))
		return (NULL);
	i = 0;
	while (s[i] != '\0' && i < n)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
