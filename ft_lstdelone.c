/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguner <oguner@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:28:31 by oguner            #+#    #+#             */
/*   Updated: 2024/11/16 15:56:38 by oguner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if(lst == NULL || del == NULL)
		return;

	del(lst->content);
	free(lst);
}
