#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_s;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (!(new_s = (char*)malloc(ft_strlen(s) + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		new_s[j] = f(i, (((char*)s)[i]));
		j++;
		i++;
	}
	new_s[j] = '\0';
	return (new_s);
}
