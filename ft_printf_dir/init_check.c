/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   init_check.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: macbookpro <macbookpro@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/24 23:54:19 by macbookpro     #+#    #+#                */
/*   Updated: 2019/11/25 00:03:46 by macbookpro    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_check		init_check(t_check chk_frmt)
{
	//OPT_START_1_2
	chk_frmt.flag_zero = -1;
	chk_frmt.flag_minus = -1;
	chk_frmt.field_width = -1;
	chk_frmt.precs = -1;
	chk_frmt.conv_spc = '\0';
	return (chk_frmt);
}