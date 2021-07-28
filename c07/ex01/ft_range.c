/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 12:28:00 by mazzouz           #+#    #+#             */
/*   Updated: 2021/07/28 13:41:18 by mazzouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib>h>
int	*ft_range(int	min, int	max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min < max)
		tab = malloc(sizeof(*tab) * (max - min));
	else
		return (tab);
	if (!tab)
		return (0);
	while (min < max)
	{
		tab[i] = min;
		min = min + 1;
		i++;
	}
	return (tab);
}
