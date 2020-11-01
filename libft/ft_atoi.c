/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsherie <dsherie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 13:15:17 by dsherie           #+#    #+#             */
/*   Updated: 2020/11/01 15:07:16 by dsherie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' ||
		c == '\f' || c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}

int			ft_atoi(const char *str)
{
	size_t	b;
	int		c;
	size_t	i;

	b = 0;
	c = 0;
	i = 0;
	while (ft_isspace(*str))
		str++;
	c = (*str == '-') ? -1 : 1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		if (i++ > 18)
		{
			if (((*str - '0' > 7 && b == MAX) || b > MAX) && c == 1)
				return (-1);
			if (((*str - '0' > 8 && b == MAX) || b > MAX) && c == -1)
				return (0);
		}
		b = b * 10 + *str++ - '0';
	}
	return (b * c);
}
