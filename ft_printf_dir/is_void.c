/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   is_void.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 12:59:03 by ydag           #+#    #+#                */
/*   Updated: 2019/11/30 13:00:12 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		is_void(t_check chk_frmt)
{
	char c;

	c = chk_frmt.conv_spc;
	if (c == 'p')
		return (1);
	return (0);
}
