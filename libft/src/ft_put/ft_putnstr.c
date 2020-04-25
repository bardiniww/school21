#include "libft.h"

void	ft_putnstr(char const *s, int a)
{
	int i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
		if (i == a)
			break ;
	}
}
