/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguner <oguner@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:28:53 by oguner            #+#    #+#             */
/*   Updated: 2024/11/16 17:37:22 by oguner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*p;
	const unsigned char	*s = (const unsigned char *)src;
	size_t				i;

	if (!dst && !src)
		return (dst);
	p = (unsigned char *)dst;
	if (p < s)
	{
		i = 0;
		while (i < len)
		{
			p[i] = s[i];
			i++;
		}
		return (dst);
	}
	i = len;
	while (i > 0)
	{
		p[i - 1] = s[i - 1];
		i--;
	}
	return (dst);
}
