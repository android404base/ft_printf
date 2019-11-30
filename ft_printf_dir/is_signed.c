/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   is_signed.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 11:41:01 by ydag           #+#    #+#                */
/*   Updated: 2019/11/30 11:43:19 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		is_signed(t_check chk_frmt)
{
	char c;

	c = chk_frmt.conv_spc;
	if (c == 'd' || c == 'i')
		return (1);
	return (0);
}
