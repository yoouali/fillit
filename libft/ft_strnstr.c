/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 05:16:57 by yoouali           #+#    #+#             */
/*   Updated: 2019/04/01 05:22:48 by yoouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *nee, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*nee)
		return ((char *)hay);
	while (hay[i] && i < len)
	{
		if (hay[i] == nee[0])
		{
			j = 0;
			while (nee[j] && i + j < len)
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
