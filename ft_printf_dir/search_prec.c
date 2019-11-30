/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   search_prec.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: macbookpro <macbookpro@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/26 23:07:08 by macbookpro     #+#    #+#                */
/*   Updated: 2019/11/30 16:47:30 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_check		search_prec(t_check chk_frmt, const char **format, va_list ap)
{
	while (is_flag(**format) || ft_isdigit(**format) || **format == '*')
		(*format)++;
	if (is_prec(**format))
	{
		(*format)++;
		if (ft_isdigit(**format))
			chk_frmt.precs = ft_atoi(*format);
		else
			chk_frmt.precs = 0;
		while (ft_isdigit(**format))
			(*format)++;
		if (**format == '*')
		{
			chk_frmt.precs = va_arg(ap, int);
			if (chk_frmt.precs < 0)
				chk_frmt.precs = -1;
			(*format)++;
		}
	}
	return (chk_frmt);
}
