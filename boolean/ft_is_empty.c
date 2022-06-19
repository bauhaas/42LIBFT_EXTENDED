/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_empty.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:23:56 by bahaas            #+#    #+#             */
/*   Updated: 2022/06/20 00:50:48 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief check if a string exist or doesn't have space characters.
 *
 * @param str string to check
 * @return bool
 */
bool			ft_isempty(char *str)
{
	if (!str)
		return true;

	for(int i = 0; str[i]; i++)
		if (!ft_isspace(str[i]))
			return false;
	return true;
}
