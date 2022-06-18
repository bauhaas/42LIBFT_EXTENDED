/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 14:45:06 by bahaas            #+#    #+#             */
/*   Updated: 2022/06/18 17:06:56 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief return the size of a string
 *
 * @param str
 * @return size_t
 */
size_t			ft_strlen(const char *str)
{
	int			i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}
