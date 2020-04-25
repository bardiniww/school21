int 	ft_first_wanna_swap(int a, int b)
{
		if (a > b)
		{
			return (1);
		}
		else
		{
			return (0);
		}
}

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	sort_int_tab(int *tab, unsigned int size)
{
	int i;
	int flag;
	int len;

	i = 0;
	flag = 1;
	len = size;
	while (flag)
	{
		flag = 0;
		while (i + 1 < len)
		{
			if (ft_first_wanna_swap(tab[i], tab[i + 1]))
			{
				flag = 1;
				ft_swap(&tab[i], &tab[i + 1]);
			}
			i++;	
		}
		i = 0;
	}	
}

