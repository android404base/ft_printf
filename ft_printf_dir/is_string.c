/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   is_string.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 11:43:28 by ydag           #+#    #+#                */
/*   Updated: 2019/11/30 11:44:40 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		is_string(t_check chk_frmt)
{
	char c;

	c = chk_frmt.conv_spc;
	if (c == 's')
		return (1);
	return (0);
}
