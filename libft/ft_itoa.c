/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsherie <dsherie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 15:45:22 by dsherie           #+#    #+#             */
/*   Updated: 2020/11/01 19:12:58 by dsherie          ###   ########.fr       */
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
	n = (!n) ? 10 : n;
	while (size /= 10)
		i++;
	if (!(result = malloc(i + 2)))
		return (NULL);
	result[i + 1] = '\0';
	while (n /= 10 && i >= 0)
		result[i--] = n % 10 + '0';
	if (minus < 0)
		result[i] = '-';
	return (result);
}
