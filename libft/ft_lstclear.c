/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsherie <dsherie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 15:07:19 by dsherie           #+#    #+#             */
/*   Updated: 2020/11/09 17:56:33 by dsherie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*old;

	while (*lst)
	{
		if ((*lst)->content)
			del((*lst)->content);
		old = *lst;
		*lst = old->next;
		free(old);
	}
	lst = NULL;
}
