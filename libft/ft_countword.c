/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countword.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 13:05:40 by yoouali           #+#    #+#             */
/*   Updated: 2019/04/05 20:13:39 by yoouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countword(char const *s, char c)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	if (s)
	{
		while (s[i])
		{
			while (s[i] && s[i] == c)
				i++;
			if (s[i] == '\0')
				break ;
			j = i;
			while (s[i] && s[i] != c)
				i++;
			if (j != i)
				k++;
		}
		return (k);
	}
	return (0);
}
