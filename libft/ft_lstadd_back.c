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
    lst_elem -> next = new;
}
