/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printerr_exit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:16:11 by bahaas            #+#    #+#             */
/*   Updated: 2022/06/17 12:16:11 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief print a string to stderr and then exit with specific return code
 *
 * @param error string to print to stderr
 * @param exit_value exit return code
 */
void ft_printerr_exit(char *error, int exit_value)
{
    fprintf(stderr, "%s\n", error);
    exit(exit_value);
}
