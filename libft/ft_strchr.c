/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 03:32:16 by yoouali           #+#    #+#             */
/*   Updated: 2019/04/01 03:49:22 by yoouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	c1;
	int				i;
	char			*str;

	i = 0;
	c1 = (unsigned char)c;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == c1)
			return (str + i);
		i++;
	}
	if (str[i] == '\0' && c == '\0')
		return (str + i);
	return (NULL);
}
