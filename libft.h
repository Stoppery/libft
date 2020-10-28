/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsherie <dsherie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:57:56 by dsherie           #+#    #+#             */
/*   Updated: 2020/10/28 18:12:03 by dsherie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

void		ft_bzero(void *s, size_t n);
void		*ft_memset(void *b, int c, size_t len);
void		*ft_memcpy(void *dest, const void *src, size_t count);
void		*ft_memccpy(void *dest, const void *src, int ch, size_t count);
void		*ft_memmove (void *destination, const void *source, size_t n);
void		*memchr (const void *arr, int c, size_t n);
int			ft_memcmp (const void *arr1, const void *arr2, size_t n);
size_t		ft_strlen(const char *s);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
char		*strchr(const char *s, int c);

#endif
