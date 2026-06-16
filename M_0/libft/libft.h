/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cade-mou <cade-mou@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 15:22:28 by cade-mou          #+#    #+#             */
/*   Updated: 2026/06/16 20:30:33 by cade-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <bsd/string.h>
#include <string.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_atoi(char *str);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isalnum(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t nb);
char	*ft_strchr(const char *s, int c);

#endif
