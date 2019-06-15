/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 18:56:31 by yoouali           #+#    #+#             */
/*   Updated: 2019/06/14 23:26:32 by yoouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	nb;
	unsigned char	*out;
	unsigned int	i;

	i = 0;
	nb = (unsigned char)c;
	out = (unsigned char *)str;
	while (i < n)
	{
		out[i] = (unsigned char)nb;
		i++;
	}
	return (out);
}
