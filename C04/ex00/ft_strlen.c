/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 12:28:07 by mazzouz           #+#    #+#             */
/*   Updated: 2021/07/24 12:28:07 by mazzouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char	*str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}
