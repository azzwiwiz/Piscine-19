/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazzouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 20:56:07 by mazzouz           #+#    #+#             */
/*   Updated: 2021/07/18 22:25:02 by mazzouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft(char	c);
int		Btab(void);
int		fill_board(int	r, int	c);

int	g_Tab[5][5];
int	g_checkrow[5][5];
int	g_checkcol[5][5];
int	g_cond[16];
int	*g_pTab1[4];
int	g_iadresse[4][2];

void	print_tab(void)
{
	int	r;
	int	c;

	r = 0;
	while (++r < 5)
	{
		c = 0;
		while (++c < 4)
		{
			ft('0' + g_Tab[r][c]);
			ft(' ');
		}
		ft('0' + g_Tab[r][c]);
		ft('\n');
	}
}

int	fill_board_sub(int	r, int	c)
{
	int	val;

	val = 0;
	while (++val < 5)
	{
		if (g_checkrow[r][val] || g_checkcol[c][val])
			continue ;
		g_checkrow[r][val] = 1;
		g_checkcol[c][val] = 1;
		g_Tab[r][c] = val;
		if (fill_board (r, c + 1))
			return (1);
		g_checkrow[r][val] = 0;
		g_checkcol[c][val] = 0;
	}
	return (0);
}

int	fill_board(int	r, int	c)
{
	if (r == 5)
	{
		if (Btab())
		{
			print_tab ();
			return (1);
		}
		return (0);
	}
	if (c == 5)
		return (fill_board (r + 1, 1));
	else
		return (fill_board_sub (r, c));
}

void	init(void)
{
	int	i;
	int	j;

	i = 0;
	while (++i < 5)
	{
		j = 0;
		while (++j < 5)
		{
			g_checkrow[i][j] = 0;
			g_checkcol[i][j] = 0;
		}
	}
	g_pTab1[0] = &g_Tab[1][1];
	g_pTab1[1] = &g_Tab[4][1];
	g_pTab1[2] = &g_Tab[1][1];
	g_pTab1[3] = &g_Tab[1][4];
	g_iadresse[0][0] = 5;
	g_iadresse[0][1] = 1;
	g_iadresse[1][0] = -5;
	g_iadresse[1][1] = 1;
	g_iadresse[2][0] = 1;
	g_iadresse[2][1] = 5;
	g_iadresse[3][0] = -1;
	g_iadresse[3][1] = 5;
}

int	rush(void)
{
	init ();
	return (fill_board (1, 1));
}
