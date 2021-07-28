/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 13:21:41 by mazzouz           #+#    #+#             */
/*   Updated: 2021/07/12 14:15:35 by mazzouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int	*tab, int	size);

void	ft_rev_int_tab(int	*tab, int	size)
{
	int	swap;
	int	low;
	int	high;

	low = 0;
	high = size - 1;
	while (low < high)
	{
		swap = tab[low];
		tab[low] = tab[high];
		tab[high] = swap;
		low++;
		high--;
	}
}
