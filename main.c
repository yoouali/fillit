/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 15:08:28 by yoouali           #+#    #+#             */
/*   Updated: 2019/06/14 10:51:46 by yoouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int ac, char **av)
{
	int	fd;

	if (ac != 2)
		write(1, "the fillit file missing\n", 23);
	else
	{
		fd = open(av[1], O_RDONLY);
		char ***tab = ft_read(fd);
		char **map = ft_sq(ft_count_sq(tab));
		ft_putstr2(map);
		int i = 0;
		while (tab[i])
		{
			ft_putstr2(tab[i]);
			i++;
		}
		map = ft_solv(map, tab);
		ft_putstr2(map);
	}
	return (0);
}
