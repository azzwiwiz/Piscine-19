/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:43:46 by mazzouz           #+#    #+#             */
/*   Updated: 2021/07/21 16:52:29 by mazzouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//je declare 2 pointeur 
//qui stockeront repectivement src et dest
//boucle1;je fais une boucle qui dit 
//que tant que le pointeur de dest n'est pas fini 
//je fais pointeur de dest ++
//boucle2:je fais une boucle qui dit 
//que tant que le pointeur de src n'est pas fini
//je copie le pointeur de src dans le pointeur de dest 
//puis je fais ++ pour les 2 pointeurs
//je mets 0 a la dertmiere case du pointeur de dest 
//ensuite je retourne dest 
char	*ft_strcat(char	*dest, char	*src)
{
	char	*c;
	char	*i;

	c = src;
	i = dest;
	while (*i)
	{
		i++;
	}
	while (*c)
	{
		*i = *c;
		c++;
		i++;
	}
	*i = 0;
	return (dest);
}
