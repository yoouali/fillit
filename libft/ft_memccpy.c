/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 15:13:18 by yoouali           #+#    #+#             */
/*   Updated: 2019/04/07 13:02:53 by yoouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	c2;
	unsigned char	*dt;
	unsigned char	*sr;
	int				i;

	i = 0;
	c2 = (unsigned char)c;
	dt = (unsigned char *)dst;
	sr = (unsigned char *)src;
	while (n-- > 0)
	{
		dt[i] = sr[i];
		if (sr[i] == c2)
			return (dt + i + 1);
		i++;
	}
	return (NULL);
}
