/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_string.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 12:32:15 by ydag           #+#    #+#                */
/*   Updated: 2019/12/02 12:34:15 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		front_padding_st(t_check chk_frmt, int str_len)
{
	if (!chk_frmt.flag_minus && (!chk_frmt.flag_zero || \
		!(chk_frmt.precs == -1 || chk_frmt.precs == 0)))
		print_padding(' ', (chk_frmt.field_width - str_len));
	if (!chk_frmt.flag_minus && chk_frmt.flag_zero)
		print_padding('0', (chk_frmt.field_width - str_len));
}

int				print_string(t_check chk_frmt, char *str)
{
	int	str_len;

	if (str)
		str_len = ft_strlen(str);
	else
		return (print_string(chk_frmt, "(null)"));
	if (chk_frmt.precs != -1 && chk_frmt.precs < str_len)
		str_len = chk_frmt.precs;
	front_padding_st(chk_frmt, str_len);
	if (chk_frmt.precs == -1)
		ft_putstr(str);
	else
		ft_putnstr(str, chk_frmt.precs);
	if (chk_frmt.flag_minus)
		print_padding(' ', (chk_frmt.field_width - str_len));
	if (chk_frmt.field_width > str_len)
		str_len = chk_frmt.field_width;
	return (str_len);
}
