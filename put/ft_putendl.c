/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 09:18:45 by bahaas            #+#    #+#             */
/*   Updated: 2022/06/18 17:15:11 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief  write a string with a "\\n" at the end
 *
 * @param s string to write
 */
void		ft_putendl(char *s)
{
	ft_putendl_fd(s, 1);
}
