/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsherie <dsherie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:24:22 by dsherie           #+#    #+#             */
/*   Updated: 2020/10/29 14:05:55 by dsherie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t a;

	a = 0;
	if (!dst || !src)
		return (0);
	while (src[a] != '\0' && dstsize > 1)
	{
		dst[a] = src[a];
		a++;
		dstsize--;
	}
	if (dstsize > 0)
		dst[a] = '\0';
	return (ft_strlen(src));
}
