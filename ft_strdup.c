/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguner <oguner@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:29:08 by oguner            #+#    #+#             */
/*   Updated: 2024/11/16 15:52:51 by oguner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
char *ft_strdup(const char *s1){
	size_t len = ft_strlen(s1);
	char* ptr = (char*) malloc((len+1) * sizeof(char)); 
	if(ptr == NULL)
		return NULL;
	size_t i = 0;
	while(i < len){
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return ptr;
}
