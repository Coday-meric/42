/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaisonn <amaisonn@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:58:42 by amaisonn          #+#    #+#             */
/*   Updated: 2023/02/07 17:09:17 by amaisonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const unsigned char	*st;
	unsigned char	ct;

	ct = c;
	st = s;
	i = 0;
	while (i < n)
	{
		if (st[i] == ct)
			return ((void *)(st + i));
		i++;
	}
	return (NULL);
}
