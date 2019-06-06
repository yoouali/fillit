#include "fillit.h"

int		check_pos(char **map, char **tab, int r, int c)
{
	int		i;
	int		j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		if (!map[c + i])
			return (0);
		while (tab[i][j])
		{
			if ((map[c + i][r + j] != '.' && tab[i][j] != '.') || !map[c + i][r + j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	**rem_tetr(char **map, t_pos *pos, int *t)
{
	int		i;
	int		j;
	int		k;

	if (*t < 0)
	{
		pos->r = 0;
		pos->c = 0;
		pos->a = 'A';
		*t = 0;
		return (ft_sq(ft_sq_plus(map)));
	}
	i = 0;
	k = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == pos->a && k == 0)
			{
				pos->r = i;
				pos->c = j;
				k++;
			}
			if (map[i][j] == pos->a)
				map[i][j] = '.';
			j++;
		}
		i++;
	}
	return (map);
}

char	**put_tetr(char **map, char **tab, t_pos *pos, int *t)
{
	int		i;
	int		j;

	i = 0;
	pos->a = pos->a + *t;
	*t = *t + 1;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] != '.')
				map[pos-> c + i][pos->r + j] = tab[i][j];
			j++;
		}
		i++;
	}
	return (map);
}

char	**ft_solv(char **map, char ***tab)
{
	t_pos	*pos;
	int		i;
	int		len;

	pos = malloc(sizeof(t_pos));
	pos->r = 0;
	pos->c = 0;
	pos->a = 'A';
	i = 0;
	len = ft_strlen(map[0]);
	while (tab[i])
	{
		while (pos->c < len && !check_pos(map, tab[i], pos->r, pos->c))
		{
			pos->r = pos->r + 1;
			if (pos->r >= len)
			{
				pos->r = 0;
				pos->c = pos->c + 1;
			}
		}
		if (pos->c >= len)
		{
			i--;
			pos->a = pos->a + i;
			map = rem_tetr(map, pos, &i);
		}
		else
			put_tetr(map, tab[i], pos, &i);
	}
	return (map);
}