/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_white_spaces.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoouali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 12:19:58 by yoouali           #+#    #+#             */
/*   Updated: 2019/04/10 12:59:26 by yoouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_white_spaces(char *s)
{
	t_list	*new;
	t_list	*ptr;
	t_list	*tmp;
	size_t	i;
	char	**fre;

	fre = ft_split_white_spaces(s);
	i = 0;
	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new = ft_lstnew(fre[i], ft_strlen(fre[i]) + 1);
	i += 1;
	ptr = new;
	while (fre[i])
	{
		tmp = ptr;
		tmp->next = ft_lstnew(fre[i], ft_strlen(fre[i]) + 1);
		ptr = tmp->next;
		i++;
	}
	return (new);
}
