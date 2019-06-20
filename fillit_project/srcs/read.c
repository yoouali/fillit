/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 16:27:58 by yoouali           #+#    #+#             */
/*   Updated: 2019/06/20 21:57:09 by akhossan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		check_tetr(char *str)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] == '#' && str[i + 1] == '#')
			k++;
		if (str[i] == '#' && str[i + 5] == '#')
			k++;
		if (str[i] == '#')
			j++;
		i++;
	}
	if (j != 4 || k < 3)
		return (0);
	return (1);
}

int		check_buff(char *str, int len)
{
	int		i;
	int		k;
	int		j;

	i = 0;
	j = 0;
	k = 1;
	while (str[i])
	{
		if (str[i] != '\n' && str[i] != '#' && str[i] != '.')
			return (0);
		if (str[i] == '#' || str[i] == '.')
			j++;
		if (str[i] == '\n')
		{
			if (str[i + 1] != '\0' && j / k != 4)
				return (0);
			k++;
		}
		i++;
	}
	if ((len == 20 && k != 5) || (len == 21 && k != 6) || !check_tetr(str))
		return (0);
	return (1);
}

char	***ft_read(int fd)
{
	int		tetr;
	int		len;
	char	*str;
	char	buff[22];
	char	*tmp;

	tetr = 0;
	str = ft_strnew(0);
	while ((len = read(fd, buff, 21)) > 0)
	{
		buff[len] = '\0';
		if (!check_buff(buff, len))
		{
			free(str);
			return (NULL);
		}
		tmp = str;
		str = ft_strjoin(str, buff);
		free(tmp);
		tetr++;
	}
	if (*str && str[tetr * 21 - 1] == '\0' && tetr < 27)
		return (ft_stock(str, tetr));
	free(str);
	return (NULL);
}
