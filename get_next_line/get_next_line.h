/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaisonn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:27:33 by amaisonn          #+#    #+#             */
/*   Updated: 2023/02/20 14:47:11 by amaisonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libft.h"

char *get_next_line(int fd);
void ft_copy(char *src, char *dest);
int ft_treatstack(char *stack);
int     ft_strlen_modif(char *str);
void    ft_strlcat_modif(char *dest, char *src, int size);
int     ft_strlcpy_modif(char *dest, char *src, int size);
char    *ft_modifstack(char *stack, int i);


#endif
