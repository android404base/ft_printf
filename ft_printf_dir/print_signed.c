/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_signed.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 12:03:04 by ydag           #+#    #+#                */
/*   Updated: 2019/11/30 13:30:08 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_signed(t_check chk_frmt, int num)
{
	int num_len;

	num_len = (int)ft_strlen(ft_itoa(num));
	if (chk_frmt.precs > num_len)
		num_len = chk_frmt.precs;
	if (num < 0)
		num_len++;
	front_padding(chk_frmt, num, num_len);
	if (chk_frmt.precs != -1)
		print_padding('0', (chk_frmt.precs - (int)ft_strlen(ft_itoa(num))));
	if (!(chk_frmt.precs == 0 && num == 0))
		ft_putlong(num);
	back_padding(chk_frmt, num, num_len);
	return (len_of_chars(chk_frmt, num));
}
