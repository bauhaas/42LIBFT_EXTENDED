/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printerr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:15:08 by bahaas            #+#    #+#             */
/*   Updated: 2022/06/17 12:15:08 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief print a string to stderr
 *
 * @param error string to print to stderr
 */
void ft_printerr(char *error)
{
    fprintf(stderr, "%s\n", error);
}