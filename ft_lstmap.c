/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguner <oguner@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:28:39 by oguner            #+#    #+#             */
/*   Updated: 2024/11/16 17:37:15 by oguner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*root;
	t_list	*temp;
	void	*content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	root = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		temp = ft_lstnew(content);
		if (temp == NULL)
		{
			del(content);
			ft_lstclear(&root, del);
			return (NULL);
		}
		ft_lstadd_back(&root, temp);
		lst = lst->next;
	}
	return (root);
}
