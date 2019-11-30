/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   back_padding.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 13:21:32 by ydag           #+#    #+#                */
/*   Updated: 2019/11/30 14:36:35 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		back_padding(t_check chk_frmt, int len)
{
	if (chk_frmt.flag_minus)
		print_padding(' ', (chk_frmt.field_width - len));
}
