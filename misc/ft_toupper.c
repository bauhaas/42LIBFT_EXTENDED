/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 12:19:37 by bahaas            #+#    #+#             */
/*   Updated: 2022/06/18 17:17:39 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief convert lowercase letter as uppercase
 *
 * @param ch letter to transform
 * @return int letter as a uppercase
 */
int		ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		ch -= 32;
	return (ch);
}
