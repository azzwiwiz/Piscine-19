#include <unistd.h>
void	ft(char	c);

int	g_Tab[5][5];
int	g_checkrow[5][5];
int	g_checkcol[5][5];
int	g_cond[16];
int	*g_pTab1[4];
int	g_iadresse[4][2];

int	Btabs(int	*ptr, int	offset, int	con)
{
	int	i;
	int	cnt;
	int	max_val;

	i = 0;
	cnt = 0;
	max_val = 0;
	while (++i < 5)
	{
		if (*ptr > max_val)
		{
			max_val = *ptr;
			++cnt;
		}
		ptr += offset;
	}
	return (cnt == con);
}

int	Btab(void)
{
	int	con;
	int	i;
	int	j;
	int	*ptr;

	con = 0;
	i = 0;
	while (i < 4)
	{
		j = 0;
		ptr = g_pTab1[i];
		while (j < 4)
		{
			if (!Btabs (ptr, g_iadresse[i][0], g_cond[con++]))
			{
				return (0);
			}
			ptr += g_iadresse[i][1];
			++j;
		}
		++i;
	}
	return (1);
}

void    ft(char c)
{
    write(1, &c, 1);
}

int	is_white_space(char	c)
{
	return (c == ' ' || (9 <= c && c <= 13));
}

int	Bcond(char	*cond)
{
	int	cnt;

	cnt = 0;
	while (*cond)
	{
		while (*cond && is_white_space (*cond))
			++cond;
		if (*cond)
		{
			if ('1' <= *cond && *cond <= '4')
			{
				if (cnt == 16)
					return (0);
				if (*(cond + 1) && !is_white_space (*(cond + 1)))
					return (0);
				g_cond[cnt++] = *cond - '0';
			}
			else
				return (0);
			++cond;
		}
	}
	return (cnt == 16);
}
