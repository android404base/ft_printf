/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   search_conv.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: macbookpro <macbookpro@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/26 23:37:07 by macbookpro     #+#    #+#                */
/*   Updated: 2019/11/30 16:43:19 by ydag          ########   odam.nl         */
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
