/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 09:26:04 by bahaas            #+#    #+#             */
/*   Updated: 2022/06/18 17:38:25 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *ptr, int c, size_t n)
{
	size_t			i = 0;
	unsigned char	*str = (unsigned char *)ptr;

	while (i < n)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
		i++;
	}
	return (NULL);
}
