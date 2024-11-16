#include "libft.h"
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	if(lst == NULL || f == NULL || del == NULL)
		return NULL;

	t_list* root = ft_lstnew(f(lst->content));
	if(root == NULL)
		return NULL;
		
	t_list* iter = root;
	lst = lst->next;
	while(lst != NULL)
	{
		iter->next  = ft_lstnew(f(lst->content));
		if(iter->next == NULL)
		{
			ft_lstclear(&root,del);
			return NULL;
		}
		iter = iter->next;
		lst = lst->next;
	}

	return root;
}
