/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_varg.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: macbookpro <macbookpro@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/24 23:59:45 by macbookpro     #+#    #+#                */
/*   Updated: 2019/11/30 11:49:04 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_varg(t_check chk_frmt, va_list ap)
{
	if (chk_frmt.conv_spc == '\0')
		return (0);
	if (chk_frmt.conv_spc == '%')
		return (print_char(chk_frmt, '%'));
	if (is_unsigned(chk_frmt))
		return (print_unsigned(chk_frmt, va_arg(ap, unsigned int)));
	if (is_signed(chk_frmt))
		return (print_signed(chk_frmt, va_arg(ap, int)));
	if (is_char(chk_frmt))
		return (print_char(chk_frmt, va_arg(ap, unsigned int)));
	if (is_string(chk_frmt))
		return (print_string(chk_frmt, va_arg(ap, char*)));
	return (print_char(chk_frmt, chk_frmt.conv_spc));
}
