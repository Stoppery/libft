/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsherie <dsherie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:57:32 by dsherie           #+#    #+#             */
/*   Updated: 2020/10/30 19:56:13 by dsherie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	size_t	size;

	size = ft_strlen(s1) + 1;
	if (!(result = (char *)malloc(size)))
		return (0);
	ft_strlcpy(result, s1, size);
	return (result);
}
