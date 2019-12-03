/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_signed.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 12:03:04 by ydag           #+#    #+#                */
/*   Updated: 2019/12/03 11:22:19 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_signed(t_check chk_frmt, int num)
{
	int		num_len;
	int		tmp;

	tmp = (int)ft_strlen(ft_itoa(num));
	num_len = (int)ft_strlen(ft_itoa(num));
	if (num < 0)
		num_len -= 1;
	if (chk_frmt.precs > num_len)
		num_len = chk_frmt.precs;
	if (num < 0)
		num_len += 1;
	front_padding(chk_frmt, num, num_len);
	if (num < 0)
		tmp = tmp - 1;
	if (chk_frmt.precs != -1)
		print_padding('0', (chk_frmt.precs - tmp));
	if (!(chk_frmt.precs == 0 && num == 0))
		ft_putlong(num);
	back_padding(chk_frmt, num_len);
	return (len_of_chars(chk_frmt, num));
}
