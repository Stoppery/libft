#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memcpy(void *dest, const void *src, size_t count);
void				*ft_memccpy(void *dest, const void *src, int ch, size_t count);
void				*ft_memmove (void *destination, const void *source, size_t n);
void				*memchr (const void *arr, int c, size_t n);
int					ft_memcmp (const void *arr1, const void *arr2, size_t n);

#endif