/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 12:24:03 by bahaas            #+#    #+#             */
/*   Updated: 2022/06/18 17:17:45 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief convert uppercase letter as lowercase
 *
 * @param ch letter to transform
 * @return int letter as a lowercase
 */
int		ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		ch += 32;
	return (ch);
}
