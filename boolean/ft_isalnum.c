/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 11:50:14 by bahaas            #+#    #+#             */
/*   Updated: 2022/06/20 00:50:58 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief check if a character is either a letter or a digit
 *
 * @param ch
 * @return bool
 */
bool		ft_isalnum(int ch)
{
	return (ft_isalpha(ch) || ft_isdigit(ch));
}
