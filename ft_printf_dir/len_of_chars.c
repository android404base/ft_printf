/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   len_of_chars.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 13:26:21 by ydag           #+#    #+#                */
/*   Updated: 2019/11/30 13:29:05 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		len_of_chars(t_check chk_frmt, int num)
{
	int	len;

	len = ft_strlen(ft_itoa(num));
	if (num < 0)
		len++;
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
	if (chk_frmt.field_width <= ft_strlen(ft_itoa(num)) && num >= 0)
		len++;
	return (len);
}
