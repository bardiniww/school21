#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	if (!s1 || !s2)
		return (0);
	if (!n)
		return (1);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i != n - 1)
		i++;
	if (s1[i] == s2[i])
		return (1);
	return (0);
}
