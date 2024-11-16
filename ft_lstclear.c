/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguner <oguner@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:27:26 by oguner            #+#    #+#             */
/*   Updated: 2024/11/16 15:56:50 by oguner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
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
