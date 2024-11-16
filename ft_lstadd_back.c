/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguner <oguner@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:27:13 by oguner            #+#    #+#             */
/*   Updated: 2024/11/16 15:48:31 by oguner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstadd_back(t_list **lst,t_list *new)
{
	if(lst == 0 || new == 0)
		return;

	if(*lst == 0)
	{
		*lst = new;
		return;
	}
	
	t_list *iteration = *lst;
	while(iteration->next != 0)
		iteration = iteration->next;

	iteration->next = new;
}
