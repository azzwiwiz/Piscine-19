/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppizzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:41:52 by ppizzo            #+#    #+#             */
/*   Updated: 2021/07/09 18:58:27 by ppizzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	convert(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	z;

	z = 'z';
	while (z >= 'a')
	{
		convert(z);
		z--;
	}
}
//int   main(void)
//{
//      ft_print_alphabet();
//}
