/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   front_padding.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 13:13:55 by ydag           #+#    #+#                */
/*   Updated: 2019/12/03 11:18:00 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	front_padding(t_check chk_frmt, int num, int len)
{
	if (!chk_frmt.flag_minus && (!chk_frmt.flag_zero || chk_frmt.precs != -1))
		print_padding(' ', (chk_frmt.field_width - len));
	if (num == 0 && chk_frmt.precs == 0 && chk_frmt.field_width != -1)
		ft_putchar(' ');
	if (num < 0)
		ft_putchar('-');
	if (!chk_frmt.flag_minus && chk_frmt.flag_zero && chk_frmt.precs == -1)
		print_padding('0', (chk_frmt.field_width - len));
}
