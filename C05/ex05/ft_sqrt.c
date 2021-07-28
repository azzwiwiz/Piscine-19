/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 15:08:10 by mazzouz           #+#    #+#             */
/*   Updated: 2021/07/28 15:58:35 by mazzouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_sqrt(int	nb)
{
	int	i;
	int	racine;

	i = 1;
	racine = 1;
	while (i < nb && racine < nb && i <= 46340)
	{
		racine = i * i;
		if (racine != nb)
			i++;
	}
	if (racine == nb)
	{
		return (i);
	}
	else
	{
		return (0);
	}
}
