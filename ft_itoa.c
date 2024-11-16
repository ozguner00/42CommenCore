/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meaydino <meaydino@student.42kocaeli.com.t +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:27:08 by oguner            #+#    #+#             */
/*   Updated: 2024/11/16 16:25:27 by meaydino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_zero(void)
{
	char	*ptr;

	ptr = malloc(2 * sizeof(char));
	if (ptr)
	{
		ptr[0] = '0';
		ptr[1] = '\0';
	}
	return (ptr);
}
char	*ft_max_negative(void)
{
	char *ptr = malloc(12 * sizeof(char)); // "-2147483648" + null
	if (ptr)
	{
		ptr[0] = '-';
		ptr[1] = '2';
		ptr[2] = '1';
		ptr[3] = '4';
		ptr[4] = '7';
		ptr[5] = '4';
		ptr[6] = '8';
		ptr[7] = '3';
		ptr[8] = '6';
		ptr[9] = '4';
		ptr[10] = '8';
		ptr[11] = '\0';
	}
	return (ptr);
}
char	*ft_itoa(int n)
{
	int		temp;
	int		len;
	char	*ptr;

	temp = n;
	len = 0;
	if (n == 0)
		return (ft_zero());
	if (n == -2147483648)
		return (ft_max_negative());
	if (n < 0)
	{
		len++;
		temp = -temp;
	}
	while (temp > 0)
	{
		temp = temp / 10;
		len++;
	}
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	if (n < 0)
	{
		ptr[0] = '-';
		n = -n;
	}
	ptr[len] = '\0';
	len--;
	while (n > 0)
	{
		ptr[len] = (n % 10) + 48;
		len--;
		n /= 10;
	}
	return (ptr);
}
