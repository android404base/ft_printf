/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_varg.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/03 12:03:40 by ydag           #+#    #+#                */
/*   Updated: 2019/12/30 16:51:21 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_varg(t_check chk_frmt, va_list ap)
{
	if (chk_frmt.conv_spc == '\0')
		return (-1);
	if (chk_frmt.conv_spc == '%')
		return (print_char(chk_frmt, '%'));
	if (is_unsigned(chk_frmt))
		return (print_unsigned(chk_frmt, va_arg(ap, unsigned long long)));
	if (is_signed(chk_frmt))
		return (print_signed(chk_frmt, va_arg(ap, int)));
	if (is_char(chk_frmt))
		return (print_char(chk_frmt, va_arg(ap, unsigned int)));
	if (is_string(chk_frmt))
		return (print_string(chk_frmt, va_arg(ap, char*)));
	return (print_char(chk_frmt, chk_frmt.conv_spc));
}
