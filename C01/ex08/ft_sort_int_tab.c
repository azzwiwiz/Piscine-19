/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:15:15 by mazzouz           #+#    #+#             */
/*   Updated: 2021/07/12 16:22:48 by mazzouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int	*tab, int	size);

void	ft_sort_int_tab(int	*tab, int	size)
{
	int	swap;
	int	low;
	int	high;

	low = 0;
    while (tab[low] < size)
	{
		high = low + 1;
		while (tab[low] > tab[high])
		{
			swap = tab[low];
			tab[low] = tab[high];
			tab[high] = swap ;
		}
		high++;
	}
	low++;
}
