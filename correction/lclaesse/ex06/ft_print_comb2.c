#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int nb1, int nb2)
{
	int	digit_start;

	digit_start = 58;
	ft_putchar(digit_start + nb1 / 10);
	ft_putchar(digit_start + nb1 % 10);
	ft_putchar(' ');
	ft_putchar(digit_start + nb2 / 10);
	ft_putchar(digit_start + nb2 % 10);
	if (nb1 + nb2 < 197)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	nb1;
	int	nb2;

	nb1 = 0;
	while (nb1 < 99)
	{
		nb2 = nb1 + 1;
		while (nb2 < 100)
		{
			print(nb1, nb2);
			nb2++;
		}
		nb1++;
	}
}

int main()
{
    ft_print_comb2();
}
