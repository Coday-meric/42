/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaisonn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 22:07:59 by amaisonn          #+#    #+#             */
/*   Updated: 2023/02/07 22:29:02 by amaisonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int	lensrc;

	lensrc = ft_strlen(src) + 1;
	dest = malloc(lensrc);
	ft_strlcpy(dest, (char *)src, lensrc);
	return (dest);
}
