/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsherie <dsherie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 15:06:34 by dsherie           #+#    #+#             */
/*   Updated: 2020/11/06 15:06:58 by dsherie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *lst_elem;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	if (!new)
		return ;
	lst_elem = ft_lstlast(*lst);
	lst_elem->next = new;
}
