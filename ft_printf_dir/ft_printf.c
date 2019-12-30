/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/03 12:01:37 by ydag           #+#    #+#                */
/*   Updated: 2019/12/30 16:50:28 by ydag          ########   odam.nl         */
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
	while (*format && len != -1)
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
