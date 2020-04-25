#include "ft_printf.h"

static int	oct_cnt(unsigned long long o)
{
	int i;

	i = 1;
	while (o /= 8)
		i++;
	return (i);
}

void		in_octave(char **dec, unsigned long long o)
{
	int len;
	int i;

	len = oct_cnt(o);
	ALLOC(*dec, char*, sizeof(char) * (len + 1));
	(*dec)[len] = '\0';
	i = len - 1;
	while (o / 8)
	{
		(*dec)[i] = o % 8 + '0';
		o /= 8;
		i--;
	}
	(*dec)[i] = o % 8 + '0';
}
