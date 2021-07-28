/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppizzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 19:04:46 by ppizzo            #+#    #+#             */
/*   Updated: 2021/07/10 11:47:30 by ppizzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	signe(int nb)
{
	if (nb < 0)
	{
		write(1, &"-", 1);
	}
}

void	convert(char nk)
{
	write(1, &nk, 1);
}

void	ft_putnbr(int nb)
{
	signe(nb);
	if (nb < 0)
	{
		nb = (-1) * nb;
	}	
	if (nb > 10)
	{
		ft_putnbr(nb / 10 );
	}
	nb = nb % 10 + 48;
	convert(nb);
}
//int main(void)
//{
//	int nb;
//	nb = 151245; 	
//	ft_putnbr(nb);
//}
