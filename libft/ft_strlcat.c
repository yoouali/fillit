/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 02:04:22 by yoouali           #+#    #+#             */
/*   Updated: 2019/04/02 14:46:44 by yoouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (dst[i])
		i++;
	while (src[j])
		j++;
	k = i + j;
	if (i >= n)
		return (j + n);
	j = 0;
	while (src[j] && i + 1 < n)
	{
		dst[i] = (char)src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (k);
}
