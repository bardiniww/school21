#include "ft_printf.h"

static void	c_actions(char c)
{
	size_t i;

	if (g_a.flags[3] == '-')
	{
		PRINT(c);
		i = 1;
		while (i++ < g_a.width)
		{
			PRINT(' ');
		}
		g_printed--;
	}
	else
	{
		i = 0;
		while (i++ < g_a.width - 1)
		{
			PRINT(' ');
		}
		PRINT(c);
		g_printed--;
	}
}

void		c_process(void)
{
	char c;

	c = (char)va_arg(g_ap, int);
	if (g_a.width > 1)
		c_actions(c);
	else
		PRINT(c);
}
