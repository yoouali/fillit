/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 19:00:59 by yoouali           #+#    #+#             */
/*   Updated: 2019/04/06 17:13:58 by yoouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	unsigned int	fix;
	unsigned int	i;
	char			*fresh;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	if (s[i] == '\0')
	{
		if (!(fresh = (char *)malloc(sizeof(char) * 1)))
			return (NULL);
		fresh[0] = '\0';
		return (fresh);
	}
	fix = ft_strlen(s) - 1;
	while (s[fix] && (s[fix] == ' ' ||
				s[fix] == '\n' || s[fix] == '\t'))
		fix--;
	return (ft_strsub(s, i, (size_t)(fix - i + 1)));
}
