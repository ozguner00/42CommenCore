/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguner <oguner@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:29:42 by oguner            #+#    #+#             */
/*   Updated: 2024/11/16 18:31:49 by oguner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle && *needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len && needle != 0)
	{
		j = 0;
		if (haystack[i + j] == needle[j])
		{
			while (needle[j] != '\0' && haystack[i + j] != '\0'
				&& (i + j) < len)
			{
				if (needle[j] != haystack[i + j])
					break ;
				j++;
			}
		}
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
