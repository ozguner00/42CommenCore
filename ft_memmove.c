/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meaydino <meaydino@student.42kocaeli.com.t +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:28:53 by oguner            #+#    #+#             */
/*   Updated: 2024/11/16 16:25:37 by meaydino         ###   ########.fr       */
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
	}
	else
	{
		i = len;
		while (i > 0)
		{
			p[i - 1] = s[i - 1];
			i--;
		}
	}
	return (dst);
}
