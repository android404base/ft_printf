/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_unsigned.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 12:51:37 by ydag           #+#    #+#                */
/*   Updated: 2019/12/20 15:37:11 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned long long	typecast(t_check fmt, unsigned long long num)
{
	if (is_uint(fmt))
		return ((unsigned int)num);
	if (is_void(fmt))
		return ((unsigned long long)num);
	return ((unsigned long long)num);
}

int							print_unsigned(t_check chk_frmt,
									unsigned long long num)
{
	int len;
	int oldprec;

	num = (typecast(chk_frmt, num));
	len = unsigned_len(num, find_base(chk_frmt));
	oldprec = chk_frmt.precs;
	if (chk_frmt.precs > len)
		len = chk_frmt.precs;
	u_front_padding(chk_frmt, num, len, oldprec);
	if (!chk_frmt.flag_minus && chk_frmt.precs != -1)
		print_padding('0', (chk_frmt.precs - \
						unsigned_len(num, find_base(chk_frmt))));
	if (chk_frmt.flag_minus && (num != 0 || is_void(chk_frmt)))
		print_prehex(chk_frmt);
	if (chk_frmt.flag_minus && chk_frmt.precs != -1)
		print_padding('0', (chk_frmt.precs - \
						unsigned_len(num, find_base(chk_frmt))));
	if (!(chk_frmt.precs == 0 && num == 0))
		unsigned_base(num, find_base(chk_frmt), find_case(chk_frmt));
	back_padding(chk_frmt, len);
	return (len_of_uchars(chk_frmt, num));
}
