/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaisonn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:27:00 by amaisonn          #+#    #+#             */
/*   Updated: 2023/02/13 13:57:05 by amaisonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrword(char const *s, char c)
{
	size_t	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while (s[i])
	{
		if (s[i] == c)
			nbr++;
		i++;
	}
	return (nbr);
}

char	*word(size_t i, size_t j)

char	**ft_split(char const *s, char c)
{
	int	nbrw;
	char	**res;
	size_t	i;
	size_t	it;
	size_t	j;

	i = 0;
	j = 0;
	it = 0;
	nbrw = ft_nbrword(s, c);
	res = malloc(nbrw * sizeof(char *));
	while (s[i])
	{
		if (s[i] == c)
		{
			res[j] = malloc(((i - it) + 1) * sizeof(char));
			it = i;
			j++;
		}
		i++;
	}
	return (res);
}
