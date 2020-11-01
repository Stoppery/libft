/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsherie <dsherie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:08:31 by dsherie           #+#    #+#             */
/*   Updated: 2020/11/01 15:39:51 by dsherie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_clear(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
	return (NULL);
}

static size_t	amount_str(char const *s, char c)
{
	size_t	i;
	size_t	amount;

	amount = 0;
	i = -1;
	while (++i < ft_strlen(s))
		if (s[i] != c && ((s[i + 1] == c) || s[i + 1] == '\0'))
			amount++;
	return (amount);
}

static char		*make_str(char const *s, char c)
{
	char	*str;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char			**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;

	if (!s || !(arr = (char **)malloc(sizeof(char *) * (amount_str(s, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
			if (!(arr[i++] = make_str(s, c)))
				return (ft_clear(arr));
		while (*s && *s != c)
			s++;
	}
	arr[i] = NULL;
	return (arr);
}
