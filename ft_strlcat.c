/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsherie <dsherie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:59:49 by dsherie           #+#    #+#             */
/*   Updated: 2020/10/28 18:10:08 by dsherie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	rsl;

	i = ft_strlen(dst);
	rsl = ft_strlen(src);
	j = 0;
	if (dstsize == 0)
		return (rsl);
	if (dstsize < i)
		rsl += dstsize;
	else
		rsl += i;
	while (src[j] != '\0' && i < dstsize - 1 && dst != src)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (rsl);
}
