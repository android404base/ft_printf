/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: macbookpro <macbookpro@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/24 22:45:37 by macbookpro     #+#    #+#                */
/*   Updated: 2019/11/24 23:53:19 by macbookpro    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char * format, ...)
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
			//OPT_START_1
			format++;
			chk_frmt = init_check(chk_frmt);
			chk_frmt = search_varg(chk_frmt, &format, ap);
			len += print_varg(chk_frmt, ap);
		}
		else
		{
			//OPT_START_2
			ft_putchar(*format);
			len++;
			format++;
		}
	}
	va_end(ap);
	return (len);
}