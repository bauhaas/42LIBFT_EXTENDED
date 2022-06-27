/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hasOptionEnabled.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 00:38:26 by bahaas            #+#    #+#             */
/*   Updated: 2022/06/20 16:39:27 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int options;

/**
 * @brief
 *
 * @param opt
 * @return true
 * @return false
 */
bool ft_hasOptionEnabled(int opt)
{
    if(options & opt)
        return true;
    return false;
}
