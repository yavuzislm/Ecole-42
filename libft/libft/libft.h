/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yislam <yislam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:43:14 by yislam            #+#    #+#             */
/*   Updated: 2022/06/23 11:32:29 by yislam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memset(void *dest, int x, size_t z);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t	len);
void	ft_bzero(void *dest, size_t z);
int		ft_isalpha(int x);
int		ft_isdigit(int x);
int		ft_isascii(int x);
int		ft_isprint(int x);
int		ft_atoi(const char *str);
int		ft_isalnum(int x);
int		ft_toupper(int x);
int		ft_tolower(int c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *src);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char	*dst, const char *src, size_t dstsize);

#endif //endif olmassa hata alırsın dikkat et ifndefin kapanması gerekiyor.
