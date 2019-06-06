/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 04:20:29 by yoouali           #+#    #+#             */
/*   Updated: 2019/04/01 05:10:47 by yoouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *hay, const char *nee)
{
	int		i;
	int		j;

	i = 0;
	if (!*nee)
		return ((char *)hay);
	while (hay[i])
	{
		if (hay[i] == nee[0])
		{
			j = 0;
			while (nee[j])
			{
				if (nee[j] != hay[i + j])
					break ;
				j++;
			}
			if (nee[j] == '\0')
				return ((char *)&hay[i]);
		}
		i++;
	}
	return (NULL);
}
