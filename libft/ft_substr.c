/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsherie <dsherie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 18:16:04 by dsherie           #+#    #+#             */
/*   Updated: 2020/10/30 20:56:07 by dsherie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*result;

	i = -1;
	if (!(result = malloc(len + 1)) || !s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		ft_bzero(result, len);
		return (result);
	}
	while (++i < len)
		result[i] = s[start + i];
	result[i] = '\0';
	return (result);
}
