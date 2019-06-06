/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 14:47:59 by yoouali           #+#    #+#             */
/*   Updated: 2019/04/07 10:58:26 by yoouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void const *src, size_t n)
{
	int				i;
	unsigned char	*dt;
	unsigned char	*sr;

	dt = (unsigned char *)dst;
	sr = (unsigned char *)src;
	i = 0;
	while (n-- > 0)
	{
		dt[i] = sr[i];
		i++;
	}
	return (dt);
}
