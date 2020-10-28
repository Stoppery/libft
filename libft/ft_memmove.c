/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsherie <dsherie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:02:39 by dsherie           #+#    #+#             */
/*   Updated: 2020/10/28 17:36:33 by dsherie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t amount)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char*)destination;
	str2 = (unsigned char*)source;
	if (str2 < str1)
		while (amount--)
			str1[amount] = str2[amount];
	else
		ft_memcpy(str1, str2, amount);
	return (destination);
}
