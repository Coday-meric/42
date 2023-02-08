/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaisonn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:00:07 by amaisonn          #+#    #+#             */
/*   Updated: 2023/02/08 13:18:19 by amaisonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	i = 0;
	d = dest;
	s = src;
	if (s == NULL && d == NULL)
		return (NULL);
	if (d < s)
		while (n-- > 0)
			*(d++) = *(s++);
	else
		while (i++ < n)
			d[n - i] = s[n - i];
	return (dest);
}
