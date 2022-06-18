/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:24:30 by bahaas            #+#    #+#             */
/*   Updated: 2022/06/18 17:30:30 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief check if a string has only numeric values or "-" and "+"
 *
 * @param str string to check
 * @return int
 */
int		ft_isnbr(char *str)
{
	int	i = 0;

	if (!str || !*str)
		return (FALSE);
	while (str[i])
	{
		if (!ft_isdigit(str[i]) && str[i] != '+' && str[i] != '-')
			return (FALSE);
		i++;
	}
	return (TRUE);
}
