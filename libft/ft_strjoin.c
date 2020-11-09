/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsherie <dsherie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 19:27:45 by dsherie           #+#    #+#             */
/*   Updated: 2020/11/09 18:03:29 by dsherie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*arr;
	size_t	i;
	size_t	j;

	i = -1;
	j = -1;
	if (!(s1 && s2) || !(arr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	while (s1[++i])
		arr[i] = s1[i];
	while (s2[++j])
		arr[i + j] = s2[j];
	arr[i + j] = '\0';
	return (arr);
}
