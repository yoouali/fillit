/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 15:10:42 by yoouali           #+#    #+#             */
/*   Updated: 2019/06/03 06:12:52 by yoouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	int	check_buff(char *buff)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (buff[i])
	{
		if (buff[i] == '#')
		{
			if (buff[i] == '#' && buff[i - 1] != '#' && buff[i + 1] != '#'\
					&& buff[i + 5] != '#' && buff[i - 5] != '#')
				return (0);
			j++;
		}
		i++;
	}
	if (j != 4)
		return (0);
	return (1);
}

static	int	buff_check(char *buff, int len)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 1;
	while (buff[i])
	{
		if (buff[i] != '.' && buff[i] != '#' && buff[i] != '\n')
			return (0);
		if (buff[i] == '.' || buff[i] == '#')
			j++;
		if (buff[i] == '\n')
		{
			if (buff[i] == '\n' && buff[i + 1] != '\0' && j / k != 4)
				return (0);
			k++;
		}
		i++;
	}
	if ((len == 20 && k != 5) || (len == 21 && k != 6) ||
			j != 16 || !check_buff(buff))
		return (0);
	return (1);
}

char		***ft_read(int fd)
{
	int		len;
	int		tetr;
	char	*tmp;
	char	*str;
	char	buff[22];

	str = ft_strnew(0);
	tetr = 0;
	while ((len = read(fd, buff, 21)) > 0)
	{
		buff[len] = '\0';
		if (!buff_check(buff, len))
			return (NULL);
		tmp = str;
		str = ft_strjoin(str, buff);
		free(tmp);
		tetr++;
	}
	if ((len < 1 && !*str) || (str[(21 * tetr) - 1] != '\0'))
	{
		free(str);
		return (NULL);
	}
	return (ft_stock(str, tetr));
}
