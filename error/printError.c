/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printError.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:57:27 by bahaas            #+#    #+#             */
/*   Updated: 2022/06/24 16:57:27 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief print a string to stderr
 *
 * @param error string to print to stderr
 */
void printError(char *error)
{
    fprintf(stderr, "%s\n", error);
}