/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 08:10:49 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/07/10 12:08:51 by mazzouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_putline(int x, char line[3])
{
	int	nbr_x;

	nbr_x = 2;
	ft_putchar(line[0]);
	while (nbr_x < x)
	{
		ft_putchar(line[1]);
		nbr_x ++;
	}
	if (x != 1)
		ft_putchar(line[2]);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		nbr;
	char	line[3];

	nbr = 1;
	while (nbr <= y)
	{
		if ((nbr > 1) && (nbr < y))
		{
			line[0] = '|';
			line[1] = ' ';
			line[2] = '|';
		}
		else
		{
			line[0] = 'o';
			line[1] = '-';
			line[2] = 'o';
		}
		ft_putline (x, line);
		nbr ++;
	}
}
