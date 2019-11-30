/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_char.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 11:52:35 by ydag           #+#    #+#                */
/*   Updated: 2019/11/30 12:02:12 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	front_padding(t_check chk_frmt)
{
	if (!chk_frmt.flag_minus)
	{
		if (!chk_frmt.flag_zero)
			print_padding(' ', (chk_frmt.field_width - 1));
		else
			print_padding('0', (chk_frmt.field_width - 1));
	}
}

int			print_char(t_check chk_frmt, unsigned int c)
{
	int res;

	front_padding(chk_frmt);
	if (chk_frmt.conv_spc == 'c')
		res = ft_putchar(c);
	else if (chk_frmt.conv_spc == '%')
		res = ft_putchar('%');
	if (chk_frmt.flag_minus)
		print_padding(' ', (chk_frmt.field_width - 1));
	if (chk_frmt.field_width > 1)
		return (chk_frmt.field_width);
	return (res);
}
