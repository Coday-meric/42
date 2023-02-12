/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaisonn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 17:06:43 by amaisonn          #+#    #+#             */
/*   Updated: 2023/02/12 09:56:12 by amaisonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int	nt;
	size_t	i;
	char 	*res;
	char	*src;
	
	i = 0;
	nt = n;
	while(nt >= 10)
	{
		nt = nt / 10;
		i++; 
	}
	res = malloc (i * sizeof(char));
	if (!res)
		return (NULL);
	while (n >= 10)
	{
		n = n / 10;
		n = n % 10;
		src = n;
		ft_strlcat(res, src, 1);
	}
	return (res);
}

int main()
{
	printf("TEST1 : %s", ft_itoa(123456789));
	return (0);
}
