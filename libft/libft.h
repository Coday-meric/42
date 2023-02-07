/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaisonn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:35:09 by amaisonn          #+#    #+#             */
/*   Updated: 2023/02/07 22:23:52 by amaisonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stddef.h>

int	ft_atoi(const char *nptr);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int 	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_strncmp(const char * first, const char * second, size_t length);
int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t ec, size_t es);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strdup(const char *src);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
size_t	ft_strlcat(char *dest, char *src, size_t size);
size_t  ft_strlcpy(char *dest, char *src, size_t size);
size_t	ft_strlen(const char *str);
#endif
