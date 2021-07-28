/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdi-lega <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 08:10:49 by sdi-lega          #+#    #+#             */
/*   Updated: 2021/07/10 12:09:50 by mazzouz          ###   ########.fr       */
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

void	setline(char line[3], int c)
{
	if (c == 0)
	{
		line[0] = 'A';
		line[1] = 'B';
		line[2] = 'A';
	}
	else if (c == 1)
	{
		line[0] = 'A';
		line[1] = 'B';
		line[2] = 'C';
	}
	else
	{
		line[0] = 'A';
		line[1] = ' ';
		line[2] = 'A';
	}
}

void	rush(int x, int y)
{
	int		nbr;
	char	line[3];
	int		i;

	i = 0;
	nbr = 1;
	while (nbr <= y)
	{
		if (nbr == 1)
		{
			i = 0;
		}
		else if (nbr == y)
		{
			i = 1;
		}
		else
		{
			i = 2;
		}
		setline(line, i);
		ft_putline (x, line);
		nbr ++;
	}
}
