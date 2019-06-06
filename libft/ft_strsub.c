/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 17:21:41 by yoouali           #+#    #+#             */
/*   Updated: 2019/04/03 17:45:44 by yoouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t size)
{
	char	*fresh;
	size_t	i;

	if (!s)
		return (NULL);
	if (!(fresh = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	i = 0;
	while (size-- > 0)
	{
		fresh[i] = (char)s[start];
		start++;
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
