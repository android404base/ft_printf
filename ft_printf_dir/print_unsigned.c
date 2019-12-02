/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_unsigned.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 12:51:37 by ydag           #+#    #+#                */
/*   Updated: 2019/12/01 11:51:29 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_check	arrange_precs(t_check chk_frmt, unsigned int n, int len)
{
	if (chk_frmt.precs < (len + 1))
	{
		if (n == 0)
			len--;
		chk_frmt.precs = len;
	}
	return (chk_frmt);
}

int				print_unsigned(t_check chk_frmt, unsigned int num)
{
	int len;
	int oldprec;

	len = unsigned_len(num, find_base(chk_frmt));
	oldprec = chk_frmt.precs;
	chk_frmt = arrange_precs(chk_frmt, num, len);
	if (chk_frmt.precs > len)
		len = chk_frmt.precs;
	front_padding(chk_frmt, num, len);
	if (!chk_frmt.flag_minus && chk_frmt.precs != -1)
		print_padding('0', (chk_frmt.precs - \
						unsigned_len(num, find_base(chk_frmt))));
	if (chk_frmt.flag_minus && chk_frmt.precs != -1)
		print_padding('0', (chk_frmt.precs - \
						unsigned_len(num, find_base(chk_frmt))));
	if (!(chk_frmt.precs == 0 && num == 0))
		unsigned_base(num, find_base(chk_frmt), find_case(chk_frmt));
	back_padding(chk_frmt, len);
	return (len_of_uchars(chk_frmt, num));
}
