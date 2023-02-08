/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaisonn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:42:31 by amaisonn          #+#    #+#             */
/*   Updated: 2023/02/08 18:34:25 by amaisonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	res = malloc((len + 1) * sizeof(char));
	while (i < len && s[start + i] != '\0')
	{
		res[i] = s[start + i];
		i++;
	}
	if (!res)
		return (NULL);
	res[i] = '\0';
	return (res);
}

