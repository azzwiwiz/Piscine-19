/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 15:21:26 by mazzouz           #+#    #+#             */
/*   Updated: 2021/07/27 16:13:03 by mazzouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	main(int	argc, char **argv)
{
	int	i;

	i = 0;
	(void) argc;
	while (argv[0][i] != '\0')
	{
		write(1, &argv[0][i], 1);
		i ++;
	}
}