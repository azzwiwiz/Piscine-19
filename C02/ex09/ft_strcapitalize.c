/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 11:42:19 by mazzouz           #+#    #+#             */
/*   Updated: 2021/07/19 14:15:01 by mazzouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char	*str);

void	boucle1(int	c, char	*str)
{
	while (str[c] != '\0')
	{
		c++;
		if ('A' <= str[c] && str[c] <= 'Z')
		{
			str[c] = str[c] + 32;
		}
	}
}

void	boucle2(int	c, char	*str)
{
	while (str[c] != '\0')
	{
		if (str[c] >= 32 && str[c] <= 47 )
		{
			c++;
			if ('a' <= str[c] && str[c] <= 'z')
			{
				str[c] = str[c] - 32;
			}
		}
		else
		{
			c++;
		}
	}
}

char	*ft_strcapitalize(char	*str)
{
	int	c;

	c = 0;
	boucle1(c, str);
	if ('a' <= str[0] && str[0] <= 'z')
	{
		str[0] = str[0 ] - 32;
	}
	c = 0;
	boucle2 (c, str);
	return (str);
}
