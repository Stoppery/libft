/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsherie <dsherie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 15:47:21 by dsherie           #+#    #+#             */
/*   Updated: 2020/10/30 20:17:34 by dsherie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*address;
	size_t	result_size;

	result_size = count * size;
	if (!(address = malloc(result_size)))
		return (NULL);
	ft_bzero(address, (result_size));
	return (address);
}
