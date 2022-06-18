/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 12:01:15 by bahaas            #+#    #+#             */
/*   Updated: 2022/06/18 17:36:15 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief check if a character is a space ascii character
 *
 * @param ch
 * @return int
 */
int		ft_isspace(int ch)
{
	return (ch == '\t' || ch == '\n' || ch == '\v' || ch == '\f' || ch == '\r' || ch == ' ') ? true : false;
}
