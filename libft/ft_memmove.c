/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaisonn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:00:07 by amaisonn          #+#    #+#             */
/*   Updated: 2023/02/03 16:22:16 by amaisonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	const char	*s;
	size_t	i;

	i = 0;
	d = dest;
	s = src;
	if (d < s)
		while (n-- > 0)
			d[n] = s[n];
	else
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	return (dest);
}
