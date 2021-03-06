/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   len_of_chars.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 13:26:21 by ydag           #+#    #+#                */
/*   Updated: 2019/12/30 16:45:28 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		len_of_chars(t_check chk_frmt, int num)
{
	int		len;
	int		tmp;

	len = (int)ft_strlen(ft_itoa(num));
	tmp = (int)ft_strlen(ft_itoa(num));
	if (chk_frmt.precs == 0 && num == 0)
		len = 0;
	if (chk_frmt.precs > len || chk_frmt.field_width > len)
	{
		if (chk_frmt.precs > chk_frmt.field_width && num >= 0)
			len = chk_frmt.precs;
		else if (chk_frmt.precs >= chk_frmt.field_width && num < 0)
			len = chk_frmt.precs + 1;
		else
			len = chk_frmt.field_width;
	}
	return (len);
}
