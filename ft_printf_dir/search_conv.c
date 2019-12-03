/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   search_conv.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/03 12:03:51 by ydag           #+#    #+#                */
/*   Updated: 2019/12/03 12:03:53 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_check		search_conv(t_check chk_frmt, const char **format)
{
	while (!(ft_isalpha(**format) || **format == '%'))
		(*format)++;
	if ((ft_isalpha(**format) && is_conv(**format)) || **format == '%')
	{
		chk_frmt.conv_spc = **format;
		(*format)++;
	}
	return (chk_frmt);
}
