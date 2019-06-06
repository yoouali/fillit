/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 08:58:55 by yoouali           #+#    #+#             */
/*   Updated: 2019/04/06 17:54:25 by yoouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int				size;
	int				i;
	unsigned int	nb;
	char			*fresh;

	size = ft_countint(n);
	if (!(fresh = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	if (n < 0)
	{
		nb = n * -1;
		fresh[0] = '-';
	}
	else
		nb = n;
	i = size - 1;
	while (nb >= 10)
	{
		fresh[i--] = nb % 10 + '0';
		nb = nb / 10;
	}
	fresh[i] = nb % 10 + '0';
	fresh[size] = '\0';
	return (fresh);
}
