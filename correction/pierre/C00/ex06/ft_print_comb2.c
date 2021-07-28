/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppizzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 21:52:21 by ppizzo            #+#    #+#             */
/*   Updated: 2021/07/10 11:45:51 by ppizzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	use(int c)
{
	write(1, &c, 1);
}

void	repon(int i, int j)
{
	if (i == 98 && j == 99)
	{
		use(i / 10 + 48), use(i % 10 + 48);
		write(1, &" ", 1), use(j / 10 + 48), use(j % 10 + 48);
	}
	else
	{
		use(i / 10 + 48), use(i % 10 + 48);
		write(1, &" ", 1), use(j / 10 + 48), use(j % 10 + 48);
		write(1, &", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			repon(i, j);
			j++;
		}
		i++;
	}
}
//int	main(void)
//{
//	ft_print_comb2();
//}
