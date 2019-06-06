/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_white_spaces.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 12:36:29 by yoouali           #+#    #+#             */
/*   Updated: 2019/04/10 12:37:53 by yoouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	int	cas1(char *s)
{
	size_t	i;
	size_t	j;
	size_t	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' ||
					s[i] == '\f' || s[i] == '\r' || s[i] == '\v'))
			i++;
		j = i;
		while (s[i] && s[i] != ' ' && s[i] != '\n' && s[i] != '\t' &&
				s[i] != '\f' && s[i] != '\r' && s[i] != '\v')
			i++;
		if (j != i)
			word += 1;
	}
	return (word);
}

char		**ft_split_white_spaces(char *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**fresh;

	if (!(fresh = (char **)malloc(sizeof(char *) * (cas1(s) + 1))))
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' ||
					s[i] == '\f' || s[i] == '\r' || s[i] == '\v'))
			i++;
		if (s[i] == '\0')
			break ;
		j = i;
		while (s[i] && s[i] != ' ' && s[i] != '\n' && s[i] != '\t' &&
				s[i] != '\f' && s[i] != '\r' && s[i] != '\v')
			i++;
		fresh[k++] = ft_strsub(s, j, i - j);
	}
	fresh[k] = NULL;
	return (fresh);
}
