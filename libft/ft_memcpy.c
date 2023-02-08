/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaisonn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:22:18 by amaisonn          #+#    #+#             */
/*   Updated: 2023/02/08 12:50:54 by amaisonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*destt;
	const char	*srct;

	if (src == NULL && dest == NULL)
		return (NULL);
	destt = dest;
	srct = src;
	while (n--)
		*destt++ = *srct++;
	return (dest);
}
