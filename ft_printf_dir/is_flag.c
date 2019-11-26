/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   is_flag.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: macbookpro <macbookpro@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/26 00:06:18 by macbookpro     #+#    #+#                */
/*   Updated: 2019/11/26 00:09:32 by macbookpro    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     is_flag(char c)
{
    if (c == '0' || c == '-')
        return (1);
    return (0);
}