/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguner <oguner@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:29:49 by oguner            #+#    #+#             */
/*   Updated: 2024/11/16 15:50:14 by oguner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
char *ft_substr(char const *s, unsigned int start, size_t len) {
    if (!s) return 0;

    size_t s_len = ft_strlen(s);
    if (start >= s_len) return ft_strdup("");

    if (s_len - start < len) len = s_len - start;

    char *substr = (char*) malloc((len + 1) * sizeof(char));
    if (substr == 0) return 0;

    size_t i = 0;
    while (i < len) {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';

    return substr;
}

