/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsherie <dsherie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 15:45:22 by dsherie           #+#    #+#             */
/*   Updated: 2020/11/02 14:45:37 by dsherie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	iteration(long size, int i)
{
	while (size)
	{
		size = size / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	long	size;
	long	n1;
	int		minus;
	char	*result;
	int		i;

	n1 = (long)n;
	i = (n1 <= 0) ? 0 : -1;
	minus = (n1 < 0) ? -1 : 1;
	n1 = (n1 < 0) ? -n1 : n1;
	size = n1;
	n1 = (!n1) ? 10 : n1;
	i = iteration(size, i);
	if (!(result = malloc(i + 2)))
		return (NULL);
	result[i + 1] = '\0';
	while (n1 && i >= 0)
	{
		result[i--] = n1 % 10 + '0';
		n1 = n1 / 10;
	}
	if (minus < 0)
		result[i] = '-';
	return (result);
}
