/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsherie <dsherie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:16:28 by dsherie           #+#    #+#             */
/*   Updated: 2020/10/28 14:43:54 by dsherie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char	*str1;
	unsigned char	*str2;
	
	size_t				i;
	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	i = 0;
	while (i < count)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dest);
}