/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsherie <dsherie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:19:07 by dsherie           #+#    #+#             */
/*   Updated: 2020/11/01 19:34:56 by dsherie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;

	i = -1;
	result = NULL;
	if (s && f)
	{
		if (!(result = (char *)malloc(ft_strlen((char *)s) + 1)))
			return (NULL);
		while (++i < ft_strlen((char *)s))
			result[i] = f(i, s[i]);
		result[i] = '\0';
	}
	return (result);
}
