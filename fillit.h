/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 15:06:45 by yoouali           #+#    #+#             */
/*   Updated: 2019/06/06 02:21:07 by yoouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "libft/libft.h"
# include <fcntl.h>
# include <stdio.h>

typedef struct s_pos
{
	int		c;
	int		r;
	char	a;
}				t_pos;
char	***ft_read(int fd);
char	***ft_stock(char *str, int tetr);
char	**ft_sq(int	l);
int		ft_count_sq(char ***tab);
void	ft_free_sq(char ***sq);
int		ft_sq_plus(char **sq);
char	**ft_solv(char **map, char ***tab);

#endif
