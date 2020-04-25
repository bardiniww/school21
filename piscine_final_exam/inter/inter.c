#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int len;
	int j;
	int pool[128]; 
	
	i = 0;
	len = 0;
	j = 0;
	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	else
	{
		while (len < 128)
		{
			pool[len] = 1;
			len++;
		}
		while (argv[1][i])
		{
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j] && pool[(int)argv[1][i]])
				{
					ft_putchar(argv[1][i]);
					pool[(int)argv[1][i]] = 0;	
				}
				j++;
			}
			j = 0;
			i++;
		}	
		ft_putchar('\n');
	}
	return (0);
}
