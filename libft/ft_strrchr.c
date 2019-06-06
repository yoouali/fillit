/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 03:58:09 by yoouali           #+#    #+#             */
/*   Updated: 2019/04/01 04:12:28 by yoouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	c1;
	int				i;
	int				j;
	char			*str;

	c1 = (unsigned char)c;
	str = (char *)s;
	i = 0;
	while (str[i])
		i++;
	j = i;
	while (i-- > 0)
	{
		if (str[i] == c1)
			return (&str[i]);
	}
	if (str[j] == '\0' && c1 == '\0')
		return (&str[j]);
	return (NULL);
}
