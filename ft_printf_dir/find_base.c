/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_base.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 13:51:40 by ydag           #+#    #+#                */
/*   Updated: 2019/11/30 13:53:10 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		find_base(t_check chk_frmt)
{
	char c;

	c = chk_frmt.conv_spc;
	if (c == 'x' || c == 'X')
		return (16);
	return (10);
}
