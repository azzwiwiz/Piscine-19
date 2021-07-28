/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppizzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:58:48 by ppizzo            #+#    #+#             */
/*   Updated: 2021/07/09 19:01:08 by ppizzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	writos(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(void)
{
	int	count;

	count = 0;
	while (count < 10)
	{
		writos(count + 48);
		count++;
	}
}
