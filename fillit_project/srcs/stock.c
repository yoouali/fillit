/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stock.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 22:09:36 by yoouali           #+#    #+#             */
/*   Updated: 2019/06/20 21:58:24 by akhossan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	ft_put_alpha(char **tab, int tetr)
{
	char	x;
	int		i;
	int		j;

	x = (char)('A' + tetr);
	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] == '#')
				tab[i][j] = x;
			j++;
		}
		i++;
	}
}

void	ft_free_tmp(char **tmp)
{
	int		i;

	i = 0;
	while (tmp[i])
	{
		free(tmp[i]);
		i++;
	}
	free(tmp);
}

char	**ft_put_tetr(char **tmp, int ind, int len, int lin)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * (lin + 1))))
		return (NULL);
	while (tmp[i])
	{
		if (ft_strchr(tmp[i], '#'))
		{
			tab[j] = ft_strsub(tmp[i], ind, len);
			j++;
		}
		i++;
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_smaller(char **tmp)
{
	int		i;
	int		len;
	int		lin;
	int		pos1;
	int		pos2;

	i = 0;
	pos1 = 4;
	pos2 = 0;
	lin = 0;
	while (tmp[i])
	{
		if (ft_strchr(tmp[i], '#'))
		{
			if (ft_strchr(tmp[i], '#') - tmp[i] < pos1)
				pos1 = ft_strchr(tmp[i], '#') - tmp[i];
			if (ft_strrchr(tmp[i], '#') - tmp[i] > pos2)
				pos2 = ft_strrchr(tmp[i], '#') - tmp[i];
			lin++;
		}
		i++;
	}
	len = pos2 - pos1 + 1;
	return (ft_put_tetr(tmp, pos1, len, lin));
}

char	***ft_stock(char *str, int tetr)
{
	char	***tab;
	char	**tmp;
	char	*tmps;
	int		i;
	int		k;

	i = 0;
	k = 0;
	if (!(tab = (char ***)malloc(sizeof(char **) * (tetr + 1))))
		return (NULL);
	i = 0;
	while (i < tetr)
	{
		tmps = ft_strsub(str, k, 21);
		tmp = ft_strsplit(tmps, '\n');
		tab[i] = ft_smaller(tmp);
		ft_free_tmp(tmp);
		ft_put_alpha(tab[i], i);
		free(tmps);
		i++;
		k = k + 21;
	}
	tab[i] = NULL;
	free(str);
	return (tab);
}
