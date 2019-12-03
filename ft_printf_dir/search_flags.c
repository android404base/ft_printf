/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   search_flags.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/03 12:04:03 by ydag           #+#    #+#                */
/*   Updated: 2019/12/03 12:04:05 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_check		search_flags(t_check chk_frmt, const char **format)
{
	const char *tmp;

	tmp = *format;
	while (*tmp && !is_conv(*tmp) && (!ft_isdigit(*tmp) || *tmp == '0'))
	{
		if (is_flag(*tmp))
		{
			if (*tmp == '-')
				chk_frmt.flag_minus = 1;
			else
				chk_frmt.flag_zero = 1;
		}
		tmp++;
	}
	return (chk_frmt);
}
