/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsherie <dsherie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 15:47:21 by dsherie           #+#    #+#             */
/*   Updated: 2020/11/06 16:06:30 by dsherie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;

	if (!size || !count)
	{
		size = 1;
		count = 1;
	}
	if (!(arr = malloc(size * count)))
		return (NULL);
	ft_bzero(arr, size * count);
	return (arr);
}
