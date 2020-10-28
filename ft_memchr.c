/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsherie <dsherie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:02:13 by dsherie           #+#    #+#             */
/*   Updated: 2020/10/28 16:15:58 by dsherie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memchr (const void *arr, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	
	str = (unsigned char *)arr;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return &str[i];
		}
		i++;
	}
	return (NULL);
}