/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguner <oguner@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:29:31 by oguner            #+#    #+#             */
/*   Updated: 2024/11/16 15:29:32 by oguner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize) {
    size_t dst_len = ft_strlen(dst);
    size_t src_len = ft_strlen(src);

    if (dstsize <= dst_len) {
        return dstsize + src_len;
    }

    size_t i = 0;
    while (i < dstsize - dst_len - 1 && src[i] != '\0') {
        dst[dst_len + i] = src[i];
        i++;
    }
    
    dst[dst_len + i] = '\0';

    return dst_len + src_len;
}

