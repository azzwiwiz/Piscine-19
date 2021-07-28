/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaceres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 20:21:46 by ecaceres          #+#    #+#             */
/*   Updated: 2021/07/19 13:59:11 by mazzouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char	*str)
{
	int		index;
	int		valid;
	char	curr;

	index = 0;
	valid = 1;
	while (1)
	{
		curr = str[index];
		if (curr == '\0')
		{
			break ;
		}
		if (!(curr >= 'a' && curr <= 'z'))
		{
			valid = 0;
			break ;
		}
		index++;
	}
	return (valid);
}
