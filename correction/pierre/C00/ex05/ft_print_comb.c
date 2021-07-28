/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppizzo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 19:03:17 by ppizzo            #+#    #+#             */
/*   Updated: 2021/07/09 19:03:19 by ppizzo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	comb(char a, char b, char c)
{
    a;
	while (a <= 55)
	{
		b = a +1 ;
		while (b <= 56)
		{
			c = b + 1;
			while (c <= 57)
			{
                    write (1, &a, 1) && write (1, &b, 1);
                    write (1, &c,1);
                    if(a == '7' && b == '8' && c == '9')
                        write (0, 0, 0);
                else
                    write (1, ", ", 2);
                
					
            
					c++ ;
				}
				b++ ;
			}
			a++ ;
		}
}
void	declaration(void)
{
	char	a;
	char	b;
	char	c;

	a = 48;
	b = 49;
	c = 50;
	comb(a, b, c);
}
//
//int	main(void)
//{
//	declaration();
//}
