/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 12:16:33 by bahaas            #+#    #+#             */
/*   Updated: 2022/06/20 00:51:15 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief check if a character is printable (32-127 ascii)
 *
 * @param ch
 * @return bool
 */
bool		ft_isprint(int ch)
{
	return (ch >= ' ' && ch <= '~');
}
