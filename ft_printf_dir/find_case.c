/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_case.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 14:08:33 by ydag           #+#    #+#                */
/*   Updated: 2019/11/30 14:09:18 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		find_case(t_check chk_frmt)
{
	char c;

	c = chk_frmt.conv_spc;
	if (c == 'x' || c == 'p')
		return (0);
	return (1);
}
