/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 11:59:30 by mazzouz           #+#    #+#             */
/*   Updated: 2021/07/29 15:09:15 by mazzouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char	*src)
{
	int		c;
	int		i;
	char	*tab;

	i = 0;
	c = 0;
	while (src[c] != '\0')
	{
		c++;
	}
	tab = malloc(sizeof(*tab) * c);
	if (!tab)
		return (0);
	while (src[i] != '\0')
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
