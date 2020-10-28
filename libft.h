#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memccpy(void *dest, const void *src, int ch, size_t count);

#endif