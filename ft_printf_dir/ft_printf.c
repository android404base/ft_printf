/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/03 12:01:37 by ydag           #+#    #+#                */
/*   Updated: 2019/12/03 12:01:41 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	va_list		ap;
	int			len;
	t_check		chk_frmt;

	len = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			chk_frmt = init_check(chk_frmt);
			chk_frmt = search_varg(chk_frmt, &format, ap);
			len += print_varg(chk_frmt, ap);
		}
		else
		{
			ft_putchar(*format);
			format++;
			len++;
		}
	}
	va_end(ap);
	return (len);
}
