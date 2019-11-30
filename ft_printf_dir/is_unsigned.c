/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   is_unsigned.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 11:44:51 by ydag           #+#    #+#                */
/*   Updated: 2019/11/30 11:48:13 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		is_unsigned(t_check chk_frmt)
{
	char c;

	c = chk_frmt.conv_spc;
	if (c == 'u' || c == 'x' || \
		c == 'X' || c == 'p')
		return (1);
	return (0);
}
