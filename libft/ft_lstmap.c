/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsherie <dsherie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 15:08:16 by dsherie           #+#    #+#             */
/*   Updated: 2020/11/06 15:22:51 by dsherie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *copy_list;
	t_list *cp_list;

	copy_list = NULL;
	while (lst && f)
	{
		if (!(cp_list = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&copy_list, del);
			return (NULL);
		}
		ft_lstadd_back(&copy_list, cp_list);
		lst = lst->next;
	}
	return (copy_list);
}
