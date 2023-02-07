/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaisonn <amaisonn@student.42perpignan.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:59:40 by amaisonn          #+#    #+#             */
/*   Updated: 2023/02/07 17:18:37 by amaisonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	size_t	i;
	const unsigned char *ptn1;
	const unsigned char *ptn2;

	ptn1 = pointer1;
	ptn2 = pointer2;
	i = 0;
	while (i < size)
	{
		if (ptn1[i] != ptn2[i])
			return (ptn1[i] - ptn2[i]);
		i++;
	}
	return (0);
}
