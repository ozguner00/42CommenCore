/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguner <oguner@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:29:42 by oguner            #+#    #+#             */
/*   Updated: 2024/11/16 15:51:20 by oguner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char* ft_strnstr(const char* haystack, const char* needle, size_t len)
{	
	if(*needle == '\0')
		return (char*)haystack;
	if (needle == NULL)
		    return NULL;

	
	size_t i = 0;
	size_t j = 0;


	while(haystack[i] != '\0' && i < len){
	j = 0;
		if(haystack[i+j] == needle[j])
		{	
		while(needle[j] != '\0' && haystack[i +j] != '\0'&& (i + j )< len)
			{
				if(needle[j] != haystack[i + j])
					break;

				j++;
			}

		}

		if(needle[j] == '\0')
			return (char*)(haystack + i);
		
		i++;
	}
	return 0;
}

