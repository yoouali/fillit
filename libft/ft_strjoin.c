/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 17:33:35 by yoouali           #+#    #+#             */
/*   Updated: 2019/04/03 19:00:44 by yoouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*fresh;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	j = ft_strlen(s1) + ft_strlen(s2);
	if (!(fresh = (char *)malloc(sizeof(char) * j + 1)))
		return (NULL);
	while (s1[i])
	{
		fresh[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		fresh[i] = s2[j];
		j++;
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
