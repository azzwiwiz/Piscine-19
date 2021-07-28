/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:43:46 by mazzouz           #+#    #+#             */
/*   Updated: 2021/07/19 14:58:04 by mazzouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char	*dest, char	*src);

char	*ft_strcat(char	*dest, char	*src, unsigned int	nb)
{
	int	c;

	c = 0;
	i = 0;
	while (dest[i] < '\0')
	{
		i++
	}

	while (src[c] <= src[nb])
	{
		dest[i] = src[c];
		c++;
		i++;
	}
}
