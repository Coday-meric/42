/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaisonn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:22:18 by amaisonn          #+#    #+#             */
/*   Updated: 2023/02/03 14:58:32 by amaisonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*tdest;
	size_t	i;

	i = 0;
	tdest = dest;
	while (src[i] && i < n)
	{
		*tdest++ = *src++
		i++;
	}
	return (tdest);
}
