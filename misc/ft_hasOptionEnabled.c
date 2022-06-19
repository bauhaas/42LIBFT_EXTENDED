/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hasOptionEnabled.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 00:38:26 by bahaas            #+#    #+#             */
/*   Updated: 2022/06/20 00:50:07 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
