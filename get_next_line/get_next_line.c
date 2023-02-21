/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaisonn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:08:17 by amaisonn          #+#    #+#             */
/*   Updated: 2023/02/22 00:34:39 by amaisonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_realloc(char *stack, int newsize)
{
	char	*tmp;
	int	ts;

	ts = ft_strlen_modif(stack);
	tmp = malloc((ts + 1) * sizeof(char));
	ft_strlcpy_modif(tmp, stack, ts + 1);
	free(stack);
	stack = malloc(newsize * sizeof(char));
	ft_strlcpy_modif(stack, tmp, ts + 1);
	free(tmp);
	return (stack);
}

char	*get_next_line(int fd)
{
	static char	*stack;
	char	*buff;
	char	*res;
	int	newsize;
	int	r;

	if (fd == -1 || read(fd, 0, 0) < 0)
		return (NULL);
	if (!stack)
	{
		stack = malloc(1);
		stack[0] = '\0';
	}
	r = BUFFER_SIZE;
	while (ft_treatstack(stack, r) == -1 && r == BUFFER_SIZE)
	{
		buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
		r = read(fd, buff, BUFFER_SIZE);
		if (r == 0)
		{
			free(buff);	
			break;
		}
		buff[r] = '\0';
		newsize = (ft_strlen_modif(buff) + ft_strlen_modif(stack) + 1);
		stack = ft_realloc(stack, newsize);
		ft_strlcat_modif(stack, buff, newsize);
		free(buff);
	}
	if (*stack == '\0')
	{
		free(stack);
		stack = NULL;
		return (NULL);
	}
	res = malloc((ft_treatstack(stack, r) + 2) * sizeof(char));
	ft_strlcpy_modif(res, stack, ft_treatstack(stack, r) + 2);
	stack = ft_modifstack(stack, ft_treatstack(stack, r) + 1);
	return (res);
}
