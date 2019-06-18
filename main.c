/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 16:21:13 by yoouali           #+#    #+#             */
/*   Updated: 2019/06/18 15:50:28 by yoouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_free_tab(char ***tab)
{
	int		i;
	int		j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			free(tab[i][j]);
			j++;
		}
		free(tab[i]);
		i++;
	}
	free(tab);
}

int		main(int ac, char **av)
{
	int		fd;
	char	***tab;
	char	**map;

	if (ac != 2)
	{
		ft_putstr("the argment less then 1 or more\n");
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	if (!(tab = ft_read(fd)))
	{
		ft_putendl("error");
		exit(0);
	}
	map = ft_sq(tab);
	map = ft_solv(tab, map);
	ft_free_tab(tab);
	ft_putstr2(map);
	ft_free_map(map);
	return (0);
}
