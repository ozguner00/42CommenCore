/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oguner <oguner@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:06:26 by oguner            #+#    #+#             */
/*   Updated: 2024/11/16 17:36:44 by oguner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_skip_and_sign(const char *str, int *index, int *sign)
{
	*index = 0;
	*sign = 1;
	while ((str[*index] == ' ' || (str[*index] >= 9 && str[*index] <= 13)))
		(*index)++;
	if ((str[*index] == '-' || str[*index] == '+'))
	{
		if (str[*index] == '-')
			*sign = -1;
		(*index)++;
	}
}

static int	ft_parse_number(const char *str, int *index)
{
	int	result;

	result = 0;
	while ((str[*index]) && (str[*index] >= '0' && str[*index] <= '9'))
	{
		result = result * 10 + str[*index] - '0';
		(*index)++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	index;

	result = 0;
	ft_skip_and_sign(str, &index, &sign);
	result = ft_parse_number(str, &index);
	return (sign * result);
}
