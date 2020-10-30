/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsherie <dsherie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 19:27:45 by dsherie           #+#    #+#             */
/*   Updated: 2020/10/30 20:17:02 by dsherie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size_s1;
	size_t	size_s2;
	size_t	i;
	size_t	j;
	char	*result;

	i = -1;
	j = -1;
	if (s1 && s2)
	{
		size_s1 = ft_strlen(s1);
		size_s2 = ft_strlen(s2) + 1;
		if (!(result = malloc(size_s1 + size_s2)))
			return (NULL);
		while (++i < size_s1)
			result[i] = s1[i];
		while (++j < size_s2)
			result[i + j] = s2[j];
		result[i + j] = '\0';
		return (result);
	}
	return (NULL);
}
