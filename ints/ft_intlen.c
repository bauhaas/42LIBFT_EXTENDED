/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:03:31 by bahaas            #+#    #+#             */
/*   Updated: 2022/06/18 17:20:20 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief return the length of a number
 *
 * @param nb number to evaluate
 * @return size_t length of nb
 */
size_t			ft_intlen(long long nb)
{
	size_t		len;

	len = 0;
	if (!nb)
		len++;
	while (nb)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}
