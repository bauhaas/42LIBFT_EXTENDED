/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 10:20:33 by bahaas            #+#    #+#             */
/*   Updated: 2022/06/18 17:06:59 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief write a string to a specific file descriptor
 *
 * @param s string to write
 * @param fd file descriptor used by write()
 */
void		ft_putstr_fd(char const *s, int fd)
{
	if (fd >= 0 && s)
		write(fd, s, ft_strlen(s));
}
