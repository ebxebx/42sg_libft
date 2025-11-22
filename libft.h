/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchoo <zchoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 11:01:10 by zchoo             #+#    #+#             */
/*   Updated: 2025/11/22 19:25:09 by zchoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int				ft_isalpha(char c);
int				ft_isdigit(char c);
int				ft_isalnum(char c);
int				ft_isascii(char c);
int				ft_isprint(char c);

unsigned int	ft_strlen(const char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_strncmp(char *s1, char *s2, unsigned int size);
char			*ft_strnstr(char *str, char *to_find, unsigned int size);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strdup(char *src);

char			ft_tolower(char c);
char			ft_toupper(char c);

int				ft_atoi(const char *str);
char			*ft_itoa(int n);

void			ft_bzero(void *s, unsigned int n);
void			*ft_memset(void *s, int c, unsigned int n);
void			*ft_memchr(const void *s, int c, unsigned int n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);

char			*ft_strjoin(char const *s1, char const *s2);
char			**ft_split(char const *s, char c);

#endif