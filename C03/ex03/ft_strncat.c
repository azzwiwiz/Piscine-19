/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:43:46 by mazzouz           #+#    #+#             */
/*   Updated: 2021/07/21 17:04:11 by mazzouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//je declare 3 pointeur 
//qui stockeront repectivement src et dest 
//et une qui me servira pour lq taille
//boucle1;je fais une boucle qui dit 
//que tant que le pointeur de dest n'est pas fini 
//je fais pointeur de dest ++
//boucle2:je fais une boucle qui dit 
//que tant que le pointeur de src n'est pas fini 
//et aue la taille est plus petit que nb
//je copie le pointeur de src dans le pointeur de dest 
//puis je fais ++ pour les 2 pointeurs et pour size
//je mets 0 a la derniere case du pointeur de dest 
//ensuite je retourne dest 
char	*ft_strncat(char	*dest, char	*src, unsigned int	nb)
{
	char			*c;
	char			*i;
	unsigned int	size;

	size = 0;
	c = src;
	i = dest;
	while (*i)
	{
		i++;
	}
	while (size < nb && *c)
	{
		*i = *c;
		c++;
		i++;
		size++;
	}
	*i = 0;
	return (dest);
}
