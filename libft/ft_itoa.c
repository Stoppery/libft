/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsherie <dsherie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 15:45:22 by dsherie           #+#    #+#             */
/*   Updated: 2020/11/01 21:01:06 by dsherie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n1)
{
	long	size;
	long	n;
	int		minus;
	char	*result;
	int		i;

	n = n1;
	i = (n <= 0) ? 0 : -1;
	minus = (n < 0) ? -1 : 1;
	n = (n < 0) ? -n : n;
	size = n;
	if (!n)
		n = 10;
	while (size)
	{
		size = size / 10;
		i++;
	}
	if (!(result = malloc(i + 2)))
		return (NULL);
	result[i + 1] = '\0';
	while (n && i >= 0)
	{
		result[i--] = n % 10 + '0';
		n = n / 10;
	}
	if (minus < 0)
		result[i] = '-';
	return (result);
}
