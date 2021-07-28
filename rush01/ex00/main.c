/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 20:36:28 by mazzouz           #+#    #+#             */
/*   Updated: 2021/07/18 22:34:53 by mazzouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int		Bcond(char	*cond);
int		rush(void);
void	print_tab(void);

int	main(int	argc, char	*argv[])
{
	if (argc != 2 || !(Bcond (argv[1]) && rush ()))
		write (1, "Error", 10);
	return (0);
}
