/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   squar.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 08:37:00 by yoouali           #+#    #+#             */
/*   Updated: 2019/06/06 02:25:50 by yoouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_sq_plus(char **sq)
{
	int		i;

	i = 0;
	while (sq[i])
		i++;
	return (i + 1);
}

void	ft_free_sq(char ***sq)
{
	int		i;

	i = 0;
	while (*sq[i])
	{
		ft_strdel(sq[i]);
		i++;
	}
	free(sq);
}

int		ft_count_sq(char ***tab)
{
	int		i;
	int		j;

	i = 0;
	while (tab[i])
		i++;
	i = i * 4;
	j = 0;
	while (j * j < i)
		j++;
	return (j);
}

char	**ft_sq(int l)
{
	int		i;
	char	**sq;

	sq = (char **)malloc(sizeof(char *) * (l + 1));
	i = 0;
	while (i < l)
	{
		sq[i] = malloc(sizeof(char) * (l + 1));
		ft_memset(sq[i], '.', l);
		sq[i][l] = '\0';
		i++;
	}
	sq[i] = NULL;
	return (sq);
}
