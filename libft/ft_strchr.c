/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsherie <dsherie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:12:18 by dsherie           #+#    #+#             */
/*   Updated: 2020/10/29 14:27:06 by dsherie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *chr;

	chr = (char *)s;
	if (c == '\0')
		return ((char*)s + ft_strlen(s));
	while ((int) *chr != c)
	{
		if (!*chr)
			return (NULL);
		chr++;
	}
	return (chr);
}
