/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   search_varg.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/03 12:04:33 by ydag           #+#    #+#                */
/*   Updated: 2019/12/03 12:04:35 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_check		search_varg(t_check chk_frmt, const char **format, va_list ap)
{
	chk_frmt = search_flags(chk_frmt, format);
	chk_frmt = search_fwidth(chk_frmt, format, ap);
	chk_frmt = search_prec(chk_frmt, format, ap);
	chk_frmt = search_conv(chk_frmt, format);
	return (chk_frmt);
}
