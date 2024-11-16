/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguner <oguner@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:28:46 by oguner            #+#    #+#             */
/*   Updated: 2024/11/16 15:55:27 by oguner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char * p = (unsigned char*)s;
	unsigned char value = (unsigned char) c;
	size_t i = 0;
	while(i < n)
	{
		if(p[i] == value)
			return (void *)(p + i);

		i++;
	}
	
	return 0;
}
