/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguner <oguner@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:29:38 by oguner            #+#    #+#             */
/*   Updated: 2024/11/16 15:51:50 by oguner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	if(s == NULL || f == NULL)
		return NULL;
	size_t len = ft_strlen(s);
	char * str = malloc((len+1)*sizeof(char));
	if(str == NULL)
		return NULL;
	size_t i = 0;
	while(i < len){
		str[i] = f(i,s[i]);
		i++;
	}
	str[i] = '\0';
	return str;
}
