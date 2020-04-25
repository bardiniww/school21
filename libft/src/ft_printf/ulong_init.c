#include "ft_printf.h"

void	ulong_init(unsigned long long *a)
{
	if (!(ft_strcmp(g_a.length, "l")))
		*a = va_arg(g_ap, unsigned long);
	else if (!(ft_strcmp(g_a.length, "ll")))
		*a = va_arg(g_ap, unsigned long long);
	else if (!(ft_strcmp(g_a.length, "h")))
		*a = (unsigned short)va_arg(g_ap, unsigned int);
	else if (!(ft_strcmp(g_a.length, "hh")))
		*a = (unsigned char)va_arg(g_ap, unsigned int);
	else
		*a = va_arg(g_ap, unsigned int);
}
