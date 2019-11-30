/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   init_check.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: macbookpro <macbookpro@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/24 23:54:19 by macbookpro     #+#    #+#                */
/*   Updated: 2019/11/30 16:22:41 by ydag          ########   odam.nl         */
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
