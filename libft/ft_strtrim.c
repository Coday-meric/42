/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaisonn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 00:18:32 by amaisonn          #+#    #+#             */
/*   Updated: 2023/02/10 15:37:44 by amaisonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_index(char const *s1, char const *set, size_t sens)
{
	size_t     i;
        int     res;

        i = sens;
        res = 0;
        while (s1[i])
        {
                while (*set)
                {
                        if (s1[i] == *set)
                                res = 1;
			set++;
                }
                if (res != 1)
                        return (i);
		if (sens == 0)
			i++;
		else
			i--;
        }

}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	Id;
	size_t	If;
	char	*res;
	
	Id = ft_index(s1, set, 0);
	If = ft_index(s1, set, ft_strlen(s1));
	res = malloc((ft_strlen(s1) - Id) * sizeof(char));
	if (!res)
		return (NULL);
	res = ft_substr(s1, Id, (ft_strlen(s1) - Id));
	return (res);
}
