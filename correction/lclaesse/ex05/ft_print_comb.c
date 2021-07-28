#include <unistd.h>

void	print_i_j_k(int i, int j, int k)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	if (i < 55)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 48;
	j = 49;
	k = 50;
	while (i <= 55)
	{
		while (j <= 56)
		{
			while (k <= 57)
			{
				print_i_j_k(i, j, k);
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i;
	}
}
