/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 15:22:28 by cade-mou          #+#    #+#             */
/*   Updated: 2026/06/25 03:02:28 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//Não esquece o Readme
#include <stdio.h>
#include <bsd/string.h>
#include <string.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isalnum(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t nb);

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t size);
char	*ft_strdup(const char *s);
char	*ft_substr(const char *str, unsigned int n, size_t size);
char	*ft_strjoin(char const *dest, char const *source);
char	*ft_strtrim(char const *s1, char const *set);

void	ft_bzero(void *s, size_t n);

void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);

char	**ft_split(char const *s, char c);

#endif
