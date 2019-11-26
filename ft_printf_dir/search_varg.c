/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   search_varg.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: macbookpro <macbookpro@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/24 23:56:51 by macbookpro     #+#    #+#                */
/*   Updated: 2019/11/26 00:30:42 by macbookpro    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_check     search_varg(t_check chk_frmt, const char *format, va_list ap)
{
    //OPT_START_1_3
    chk_frmt = search_flags(chk_frmt, format);
    return (chk_frmt);
}