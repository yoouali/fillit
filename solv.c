/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 23:50:41 by yoouali           #+#    #+#             */
/*   Updated: 2019/06/15 12:20:46 by yoouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int		check_pos(char **tab, char **map, t_pos *pos)
{
	int		i;
	int		j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		if (!map[pos->c + i])
			return (0);
		while (tab[i][j])
		{
			if ((map[pos->c + i][pos->r + j] != '.' && tab[i][j] != '.')\
					|| map[pos->c + i][pos->r + j] == '\0')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	**rem_tetr(char **map, t_pos *pos)
{
	int		i;
	int		j;
	int		k;

	pos->t = pos->t - 1;
	if (pos->t < 0)
		return (ft_sq_plus(map, pos));
	i = -1;
	k = 0;
	while (map[++i])
	{
		j = -1;
		while (map[i][++j])
		{
			if (map[i][j] == 'A' + pos->t && k != 0)
			{
				k = 1;
				pos->r = j + 1;
				pos->c = i;
			}
			if (map[i][j] == 'A' + pos->t)
				map[i][j] = '.';
		}
	}
	return (map);
}

char	**put_tetr(char **tab, char **map, t_pos *pos)
{
	int		i;
	int		j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] != '.')
				map[pos->c + i][pos->r + j] = tab[i][j];
			j++;
		}
		i++;
	}
	pos->t = pos->t + 1;
	pos->c = 0;
	pos->r = 0;
	return (map);
}

char	**ft_solv(char ***tab, char **map)
{
	t_pos	*pos;

	if (!(pos = (t_pos *)malloc(sizeof(t_pos))))
		return (NULL);
	pos->t = 0;
	pos->r = 0;
	pos->c = 0;
	pos->len = ft_strlen(map[0]);
	while (tab[pos->t])
	{
		while (pos->c < pos->len && !check_pos(tab[pos->t], map, pos))
		{
			if ((pos->r = pos->r + 1) >= pos->len)
			{
				pos->r = 0;
				pos->c = pos->c + 1;
			}
		}
		if (pos->c >= pos->len)
			map = rem_tetr(map, pos);
		else
			map = put_tetr(tab[pos->t], map, pos);
	}
	free(pos);
	return (map);
}
