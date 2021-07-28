/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 17:11:20 by mazzouz           #+#    #+#             */
/*   Updated: 2021/07/21 17:21:51 by mazzouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//je declare 2 variable 
//cond1:je dis que si to_find vaut 0 je retourne str
//car la fin de str vaut 0 dans un tableau de chaine de caractere
//ensuite j initialise c a 0
//boucle1: je dis aue tant que str[c] ne vaut pas 0 
//j initialise i a 0 et je remet une boucle 
//boucle2: cette boucle dit aue tant que to_find vaut str
//alors si to_find == 0 je retourne str 
//si i++;
//pis c++;
char	*ft_strstr(char	*str, char	*to_find)
{
	int	c;
	int	i;

	if (*to_find == 0)
		return (str);
	c = 0;
	while (str[c] != '\0')
	{
		i = 0;
		while (to_find[i] == str[c + i])
		{
			if (to_find[i + 1] == '\0')
			{
				return (str + c);
			}
			i++;
		}
		c++;
	}
	return (0);
}
