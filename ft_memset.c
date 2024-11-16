/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguner <oguner@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:28:55 by oguner            #+#    #+#             */
/*   Updated: 2024/11/16 17:37:23 by oguner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	value;
	size_t			n;

	p = (unsigned char *)b;
	value = (unsigned char)c;
	n = 0;
	while (n < len)
	{
		p[n] = value;
		n++;
	}
	return (b);
}
