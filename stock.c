/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stock.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 15:57:53 by yoouali           #+#    #+#             */
/*   Updated: 2019/06/04 22:28:37 by yoouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	void	ft_st4(char **tab, int k)
{
	int		i;
	int		j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] == '#')
				tab[i][j] = 'A' + k;
			j++;
		}
		i++;
	}
}

static	char	**ft_st3(char **tab, int pos, int lon, int lin)
{
	char	**tab1;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(tab1 = (char **)malloc(sizeof(char *) * (lin + 1))))
		return (NULL);
	while (tab[i])
	{
		if (ft_strchr(tab[i], '#'))
		{
			tab1[j] = ft_strsub(tab[i], pos, lon);
			j++;
		}
		i++;
	}
	tab1[j] = NULL;
	return (tab1);
}

static	char	**ft_st2(char **tab)
{
	int		i;
	int		pos;
	int		lon;
	int		lin;

	i = 0;
	pos = 4;
	lon = 0;
	lin = 0;
	while (tab[i])
	{
		if (ft_strchr(tab[i], '#'))
		{
			if (ft_strchr(tab[i], '#') - tab[i] < pos)
				pos = ft_strchr(tab[i], '#') - tab[i];
			if (ft_strrchr(tab[i], '#') - tab[i] > lon)
				lon = ft_strrchr(tab[i], '#') - tab[i];
			lin++;
		}
		i++;
	}
	lon = lon - pos + 1;
	return (ft_st3(tab, pos, lon, lin));
}

static	char	**ft_st1(char *str)
{
	int		i;
	char	**tab1;
	char	**tab2;

	tab1 = ft_strsplit(str, '\n');
	tab2 = ft_st2(tab1);
	i = 0;
	while (tab1[i])
	{
		free(tab1[i]);
		i++;
	}
	free(tab1);
	free(str);
	return (tab2);
}

char			***ft_stock(char *str, int tetr)
{
	int		i;
	int		k;
	char	***tab;
	char	*tmp;

	if (!(tab = (char ***)malloc(sizeof(char **) * (tetr + 1))))
		return (NULL);
	i = 0;
	tmp = str;
	while (tetr > 0)
	{
		k = 21;
		if (tetr == 1)
			k = 20;
		tab[i] = ft_st1(ft_strsub(tmp, 0, k));
		ft_st4(tab[i], i);
		i++;
		tetr--;
		tmp = tmp + k;
	}
	tab[i] = NULL;
	free(str);
	return (tab);
}
