/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 14:40:14 by bahaas            #+#    #+#             */
/*   Updated: 2022/06/18 17:09:56 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief write a string
 *
 * @param str string to write
 */
void		ft_putstr(char *str)
{
	ft_putstr_fd(str, 1);
}
