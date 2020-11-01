/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsherie <dsherie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 15:45:22 by dsherie           #+#    #+#             */
/*   Updated: 2020/11/01 17:56:56 by dsherie          ###   ########.fr       */
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
	minus = 1;
	i = -1;
	if (n < 0)
	{
		minus = -minus;
		n = -n;
		i = 0;
	}
	size = n;
	while (size)
	{
		size = size / 10;
		i++;
	}
	if (!n)
	{
		i = 0;
		n = 10;
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
