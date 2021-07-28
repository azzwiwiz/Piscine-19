/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 13:52:15 by mazzouz           #+#    #+#             */
/*   Updated: 2021/07/10 13:52:19 by mazzouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	int	N;
	int	P;

	N = 78;
	P = 80;
	if (n < 0)
	{
		write (1, &N, 1);
	}
	else
	{
		write (1, &P, 1);
	}
}