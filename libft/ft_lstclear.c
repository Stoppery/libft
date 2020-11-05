#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*old;

	if (!del || !lst)
		return ;
	while (*lst)
    {
        del((*lst) -> content);
		old = *lst;
		*lst = old -> next;
        free(old);
    }
    *lst = NULL;
}