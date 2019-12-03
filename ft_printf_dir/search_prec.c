/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   search_prec.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/03 12:04:24 by ydag           #+#    #+#                */
/*   Updated: 2019/12/03 12:04:26 by ydag          ########   odam.nl         */
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
