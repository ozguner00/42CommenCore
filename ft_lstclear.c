#include "libft.h"
void ft_lstclear(t_list **lst, void(*del) (void *))
{	
	t_list *iter = *lst;
	t_list *temp;
	while(iter)
	{	del(iter->content);
		temp = iter;
		iter = iter->next;
		free(temp);
	}	
	*lst = NULL;
}
