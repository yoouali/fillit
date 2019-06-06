/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 16:31:11 by yoouali           #+#    #+#             */
/*   Updated: 2019/04/10 14:06:10 by yoouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ds;
	unsigned char	*sr;
	size_t			i;

	i = 0;
	ds = (unsigned char *)dst;
	sr = (unsigned char *)src;
	if (sr < ds)
	{
		while (len-- > 0)
			ds[len] = sr[len];
	}
	else
	{
		while (len-- > 0)
		{
			ds[i] = sr[i];
			i++;
		}
	}
	return (dst);
}
