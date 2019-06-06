/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 14:31:15 by yoouali           #+#    #+#             */
/*   Updated: 2019/04/10 14:17:21 by yoouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fre;

	while (lst)
	{
		fre = f(lst);
		fre->next = ft_lstmap(lst->next, f);
		return (fre);
	}
	return (NULL);
}
