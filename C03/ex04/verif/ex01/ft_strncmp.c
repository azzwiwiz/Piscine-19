/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:34:45 by mazzouz           #+#    #+#             */
/*   Updated: 2021/07/19 14:55:29 by mazzouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char	*s1, char	*s2, unsigned int	n);

int	ft_strncmp(char	*s1, char	*s2, unsigned int	n)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (s1[c] <= s1[n])
	{
		c++;
	}
	while (s2[i] <= s1[n])
	{
		i++;
	}
	return (c - i);
}
