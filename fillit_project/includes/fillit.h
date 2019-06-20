/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 16:17:32 by yoouali           #+#    #+#             */
/*   Updated: 2019/06/20 22:00:08 by akhossan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "../../libft/libft.h"
# include <fcntl.h>

typedef	struct		s_pos
{
	int		r;
	int		c;
	int		len;
	int		t;
}					t_pos;

char				***ft_read(int fd);
char				***ft_stock(char *str, int tetr);
char				**ft_sq_plus(char **map, t_pos *pos);
char				**ft_sq(char ***tab);
void				ft_free_map(char **map);
char				**ft_solv(char ***tab, char **map);

#endif
