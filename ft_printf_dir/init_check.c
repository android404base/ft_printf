/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   init_check.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/03 12:02:08 by ydag           #+#    #+#                */
/*   Updated: 2019/12/03 12:02:11 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_check		init_check(t_check chk_frmt)
{
	chk_frmt.flag_zero = 0;
	chk_frmt.flag_minus = 0;
	chk_frmt.field_width = -1;
	chk_frmt.precs = -1;
	chk_frmt.conv_spc = '\0';
	return (chk_frmt);
}
