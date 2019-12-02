/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   search_fwidth.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: macbookpro <macbookpro@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/26 00:56:20 by macbookpro     #+#    #+#                */
/*   Updated: 2019/12/01 11:27:59 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_check		search_fwidth(t_check chk_frmt, const char **format, va_list ap)
{
	while (is_flag(**format))
		(*format)++;
	if ((ft_isdigit(**format) && **format != '0') || **format == '*')
	{
		if (ft_isdigit(**format))
			chk_frmt.field_width = ft_atoi(*format);
		if (chk_frmt.field_width < 0)
			chk_frmt.field_width = -1;
		while (ft_isdigit(**format))
			(*format)++;
		if (**format == '*')
		{
			chk_frmt.field_width = va_arg(ap, int);
			if (chk_frmt.field_width < 0)
			{
				chk_frmt.flag_minus = 1;
				chk_frmt.field_width = FT_ABS(chk_frmt.field_width);
			}
		}
		while (**format == '*')
			(*format)++;
	}
	return (chk_frmt);
}
