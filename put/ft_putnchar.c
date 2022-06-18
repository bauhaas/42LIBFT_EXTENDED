/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 14:20:19 by bahaas            #+#    #+#             */
/*   Updated: 2022/06/18 17:12:17 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief write a char n times
 *
 * @param c char to write
 * @param n times you will write it
 */
void		ft_putnchar(const char c, const int n)
{
	for(int i = 0; i < n; i++)
		ft_putchar(c);
}
