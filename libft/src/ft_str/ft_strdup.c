#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	int		i;

	if (!(res = (char*)malloc(ft_strlen(s) + 1)))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
