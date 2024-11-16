/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguner <oguner@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:28:53 by oguner            #+#    #+#             */
/*   Updated: 2024/11/16 15:54:55 by oguner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
				return (dst);
	unsigned char *p = (unsigned char*) dst;
	const unsigned char *s = (const unsigned char*) src;
	size_t i;
	
	if (p < s) {
        i = 0;
        while (i < len) {
            p[i] = s[i];
            i++;
        }
    } else {
        i = len;
        while (i > 0) {
            p[i - 1] = s[i - 1];
            i--;
        }
    }	return dst;
}

