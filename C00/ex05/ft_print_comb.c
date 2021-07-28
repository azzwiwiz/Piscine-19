/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:50:51 by mazzouz           #+#    #+#             */
/*   Updated: 2021/07/09 16:44:54 by mazzouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_print_comb(void);

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				write(1, &x, 1) && write(1, &y, 1);
				write(1, &z, 1);
				if (x == '7' && y == '8' && z == '9')
					write (0, 0, 0);
				else
					write(1, ", ", 2);
				z++;
			}
			y++;
		}
		x++;
	}
}

int main()
{
    ft_print_comb();
}
