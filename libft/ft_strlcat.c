/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaisonn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:23:15 by amaisonn          #+#    #+#             */
/*   Updated: 2022/12/07 16:46:34 by amaisonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	td;
	unsigned int	destl;
	unsigned int	srcl;

	td = ft_strlen(dest);
	destl = ft_strlen(dest);
	srcl = ft_strlen(src);

	if (size == 0 || ft_strlen(dest) >= size)
                return (ft_strlen(src) + size);
	
	while (*src && td < size - 1)
	{
		dest[td] = *src;
		td++;
		src++;
	}
	dest[td] = '\0';
	return (destl + srcl);
}
