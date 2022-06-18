/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 14:39:00 by bahaas            #+#    #+#             */
/*   Updated: 2022/06/18 17:38:00 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i = 0;
	unsigned char		*d = (unsigned char *)dest;
	unsigned const char	*s = (unsigned const char *)src;

	if (dest == src)
		return (dest);
	while (i < n)
	{
		if (s[i] == (unsigned char)c)
		{
			d[i] = s[i];
			return (&d[i + 1]);
		}
		d[i] = s[i];
		i++;
	}
	return (NULL);
}
