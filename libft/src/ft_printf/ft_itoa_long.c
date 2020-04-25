#include "ft_printf.h"

static size_t	ft_cnt(unsigned long long n)
{
	size_t i;

	i = 0;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_abs_itoa_long(unsigned long long n)
{
	char	*str;
	size_t	len;

	len = 2 + ft_cnt(n);
	ALLOC(str, char*, len);
	str[--len] = '\0';
	while (len--)
	{
		str[len] = n % 10 + 48;
		n /= 10;
	}
	return (str);
}
