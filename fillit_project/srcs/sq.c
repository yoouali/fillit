/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sq.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 23:14:29 by yoouali           #+#    #+#             */
/*   Updated: 2019/06/20 21:58:42 by akhossan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	ft_free_map(char **map)
{
	int		i;

	i = 0;
	while (map[i])
	{
		free(map[i]);
		i++;
	}
	free(map);
}

char	**ft_sq_plus(char **map, t_pos *pos)
{
	char	**tab;

	pos->len = ft_strlen(map[0]) + 1;
	if (!(tab = (char **)malloc(sizeof(char *) * (pos->len + 1))))
		return (NULL);
	pos->c = 0;
	while (pos->c < pos->len)
	{
		if (!(tab[pos->c] = (char *)malloc(sizeof(char) * (pos->len + 1))))
			return (NULL);
		tab[pos->c] = ft_memset(tab[pos->c], '.', pos->len);
		tab[pos->c][pos->len] = '\0';
		pos->c = pos->c + 1;
	}
	pos->r = 0;
	pos->t = 0;
	tab[pos->c] = NULL;
	pos->c = 0;
	ft_free_map(map);
	return (tab);
}

char	**ft_sq(char ***tab)
{
	char	**map;
	int		i;
	int		j;

	i = 0;
	while (tab[i])
		i++;
	j = 0;
	while (j * j < i * 4)
		j++;
	if (!(map = (char **)malloc(sizeof(char *) * (j + 1))))
		return (NULL);
	i = 0;
	while (i < j)
	{
		if (!(map[i] = (char *)malloc(sizeof(char) * (j + 1))))
			return (NULL);
		map[i] = ft_memset(map[i], '.', (size_t)j);
		map[i][j] = '\0';
		i++;
	}
	map[i] = NULL;
	return (map);
}
