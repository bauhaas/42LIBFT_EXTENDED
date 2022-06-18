/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 11:47:14 by bahaas            #+#    #+#             */
/*   Updated: 2022/06/18 17:35:33 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief check if a character is a digit
 *
 * @param ch
 * @return int
 */
int		ft_isdigit(int ch)
{
	return (ch >= '0' && ch <= '9') ? true : false;
}
