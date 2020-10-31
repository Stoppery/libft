/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsherie <dsherie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:08:31 by dsherie           #+#    #+#             */
/*   Updated: 2020/10/31 22:44:44 by dsherie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	amount_str(char const *s, char c)
{
	size_t	i;
	size_t	amount;

	amount = 0;
	i = -1;
	while (++i < strlen(s))
		if (s[i] != c && ((s[i + 1] == c) || s[i + 1] == '\0'))
			amount++;
	return (amount);
}

char	*make_str(char const *s, char c)
{
	char	*str;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	printf("I1 = %d\n",i);
	i = 0;
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		printf("СИМВОЛ = %c\n",str[i]);
		i++;
	}
	printf("I2 = %d\n\n\n\n",i);
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;

	if (!(arr = (char **)malloc(sizeof(char *) * (amount_str(s, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c)
		{
			arr[i] = make_str(s, c);
			i++;
			if (*s == c)
				break ;
		}
		s++;
	}
	arr[i] = NULL;
	return (arr);
}

int main()
{
	//char *s = "      split       this for   me  ";
	char *s = "      split       this for   me  !";
	//char *s = "      split       this for   me  !";
	char c = ' ';
	int i = 0;
	char **array;
	array = ft_split(s, c);
	printf("РАЗМЕРНОСТЬ МАССИВА: %lu\n", amount_str(s, c));
	while (i < amount_str(s, c))
	{
		printf("ЭЛЕМЕНТ МАССИВА: %s\n",array[i]);
		i++;
	}

	return (0);
}

