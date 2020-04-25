#include "sudoku.h"

int		main(int argc, char **argv)
{
	if (check_grid(argv, argc))
	{
		if (sudoku(argv, 9))
			display(argv);
		else
		{
			ft_putstr("Error");
			ft_putchar('\n');
		}
	}
	else
	{
		ft_putstr("Error");
		ft_putchar('\n');
	}
	return (0);
}
