/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hasOptionEnabled.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 00:38:26 by bahaas            #+#    #+#             */
/*   Updated: 2022/06/20 00:42:52 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Check if the option opt is enabled
 *
 * @param opt value to check
 * @return int true/false
 */
bool hasOptionEnabled(int opt)
{
    if(options & opt)
        return true;
    return false;
}
