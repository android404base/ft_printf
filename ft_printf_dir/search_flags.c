/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   search_flags.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: macbookpro <macbookpro@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/26 00:37:49 by macbookpro     #+#    #+#                */
/*   Updated: 2019/11/26 18:25:03 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_check		search_flags(t_check chk_frmt, const char *format)
{
	const char *tmp;

	tmp = format;
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
