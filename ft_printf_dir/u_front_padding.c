/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   u_front_padding.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/02 13:15:19 by ydag           #+#    #+#                */
/*   Updated: 2019/12/02 16:29:50 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	u_front_padding(t_check chk_frmt, int num, int len, int op)
{
	if (!chk_frmt.flag_minus && (!chk_frmt.flag_zero || chk_frmt.precs != -1))
	{
		if (!(chk_frmt.flag_zero && op == -1))
			print_padding(' ', (chk_frmt.field_width - len));
	}
	if (num == 0 && chk_frmt.precs == 0 && chk_frmt.field_width != -1)
		ft_putchar('0');
	if (!chk_frmt.flag_minus && chk_frmt.flag_zero && op == -1)
		print_padding('0', (chk_frmt.field_width - len));
}
