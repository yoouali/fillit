/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 13:07:57 by yoouali           #+#    #+#             */
/*   Updated: 2019/04/05 20:43:19 by yoouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**fresh;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	if (!(fresh = (char **)malloc(sizeof(char *) * (ft_countword(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		k = i;
		while (s[i] && s[i] != c)
			i++;
		fresh[j] = ft_strsub(s, k, i - k);
		j++;
	}
	fresh[j] = NULL;
	return (fresh);
}
