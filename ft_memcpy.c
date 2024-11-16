/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguner <oguner@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:28:50 by oguner            #+#    #+#             */
/*   Updated: 2024/11/16 15:55:12 by oguner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memcpy(void *dst, const void *src, size_t n)
{	
	if (!dst && !src)
		return (dst);
	unsigned char *p = (unsigned char*)dst;
	const unsigned char *s = (const unsigned char*)src;
	size_t i = 0;
	
	while(i < n ) 
	{
		p[i] = s[i];
		i++;
	}
	return dst;
}
