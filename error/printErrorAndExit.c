/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printErrorAndExit.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:53:59 by bahaas            #+#    #+#             */
/*   Updated: 2022/06/24 16:53:59 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief print a string to stderr and then exit with specific return code
 *
 * @param error string to print to stderr
 * @param exit_value exit return code
 */
void printErrorAndExit(char *error, int exit_value)
{
    fprintf(stderr, "%s\n", error);
    exit(exit_value);
}
