/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 12:34:06 by mazzouz           #+#    #+#             */
/*   Updated: 2021/07/08 13:20:47 by mazzouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	int	alpha;

	alpha = 122;
	while (alpha >= 97)
	{
		write (1, &alpha, 1);
		alpha--;
	}
}
