/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguner <oguner@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:29:05 by oguner            #+#    #+#             */
/*   Updated: 2024/11/16 15:54:11 by oguner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
void	ft_putstr_fd(char *s, int fd)
{
	size_t len = ft_strlen(s);
	if (!s)
		return ;
	write(fd, s, len);
}
