/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 17:47:02 by yoouali           #+#    #+#             */
/*   Updated: 2019/04/10 18:00:56 by yoouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlst(t_list *new)
{
	t_list	*ptr;
	t_list	*tmp;

	ptr = new;
	while (ptr)
	{
		tmp = ptr;
		ft_putstr((char *)tmp->content);
		ft_putchar(' ');
		ft_putchar(':');
		ft_putchar(' ');
		ft_putnbr((int)tmp->content_size);
		ft_putchar('\n');
		ptr = tmp->next;
	}
}
