/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaisonn <amaisonn@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:01:46 by amaisonn          #+#    #+#             */
/*   Updated: 2023/02/07 17:55:32 by amaisonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;

	if (!*little)
		return ((char *)(big));
	if (!*big)
		return (NULL);
	while (i < len)
	{
		if (big[i] == little[j])
		{
			while (big[i] == little[j] && big[i] != '\0' && i < len)
			{
				i++;
				j++;
			}	
			if (little[j] == '\0')
				return ((char *)(big + (i - j)));	
		}
		j = 0;
		i++;
	}
	return (NULL);
}
