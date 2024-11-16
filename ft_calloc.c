/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguner <oguner@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:26:51 by oguner            #+#    #+#             */
/*   Updated: 2024/11/16 15:57:42 by oguner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
void *ft_calloc(size_t count, size_t size)
{	

	char* ptr = (char*) malloc(count * size);
	if(ptr == NULL)
		return NULL;
	size_t i = 0;
	while(i < (count*size)){
		ptr[i] = 0;
		i++;
	}
	return ptr;
}
