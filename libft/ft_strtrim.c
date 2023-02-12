/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaisonn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 00:18:32 by amaisonn          #+#    #+#             */
/*   Updated: 2023/02/10 17:00:11 by amaisonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_index(char const *s1, char const *set, size_t sens)
{
	size_t	i;
	size_t	j;
        int     res;

        i = sens;
        while (s1[i])
        {
		res = 0;
		j = 0;
		while (set[j])
                {
                        if (s1[i] == set[j])
                                res = 1;
			j++;
                }
                if (res != 1)
                        return (i);
		if (sens == 0)
			i++;
		else
			i--;
        }
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	Id;
	size_t	If;
	char	*res;
		
	Id = ft_index(s1, set, 0);
	If = ft_index(s1, set, ft_strlen(s1) - 1);
	res = malloc((If - Id + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res = ft_substr(s1, Id, (If - Id + 1));
	return (res);
}
