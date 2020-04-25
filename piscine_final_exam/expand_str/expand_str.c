#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
		{
			i++;
		}
		while (argv[1][i])
		{
			while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i])
			{
				if (flag)
				{
					ft_putchar(' ');
					ft_putchar(' ');
					ft_putchar(' ');
				}
				ft_putchar(argv[1][i]);
				flag = 0;
				i++;
			}
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				flag = 1;
				i++;
			}	
		}
		ft_putchar('\n');
	}
	return (0);
}