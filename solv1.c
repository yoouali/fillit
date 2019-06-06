#include "fillit.h"

int		check_pos(char **tab, char **map, int k, int z)
{
	int		i = 0;
	int		j = 0;
	int		a = z;
	int		b = k;

	while (tab[i][j])
	{
		if (!map[b])
			return (0);
		while (tab[i])
		{
			if (map[b][a] != '.' && tab[i][j] != '.')
				return 0;
			b++;
			i++;
		}
		i = 0;
		b = k;
		a++;
		j++;
	}
	return (1);
}

char	**rem_tetr(char **map, int *k, int *z, int a)
{
	int i;
	int j;
	int r;
	char c;

	i = 0;
	r = 0;
	c = (char)('A' + a - 1);
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == c && r == 0)
			{
				*k = i;
				*z = j + 1;
				r++;
			}
			if (map[i][j] == c)
				map[i][j] = '.';
			j++;
		}
		i++;
	}
	return (map);
}

char 	**put_tetr(char **tab, char **map, int *k, int *z)
{

	int i = 0;
	int j = 0;
	int a = *k;
	int b = *z;

	while (tab[i])
	{
		b = *z;
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] != '.')
			map[a][b] = tab[i][j];
			j++;
			b++;
		}
		a++;
		i++;
	}
	*k = 0;
	*z = 0;
	return (map);
}

char	**ft_solv(char **map, char ***tab)
{
	int		z;
	int		k;
	int		i;

	i = 0;
	z = 0;
	k = 0;
	int pos = (int)ft_strlen(map[0]);
	while (tab[i])
	{
		while (!check_pos(tab[i], map, k, z) && k < pos)
		{
			printf ("fdfdfd\n");
			z++;
			if (z > pos)
			{
				k++;
				z = 0;
			}
		}
		if (k < pos)
		{
			printf ("lol");
			map = put_tetr(tab[i], map, &k, &z);
			i++;
		}
		else
		{
			map = rem_tetr(map, &k, &z, i);
			i--;
		}
	}
	ft_putstr2(map);
	return (map);
}
