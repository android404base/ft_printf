/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   len_of_uchars.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 14:12:37 by ydag           #+#    #+#                */
/*   Updated: 2019/11/30 14:17:22 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		len_of_uchars(t_check chk, unsigned int num)
{
	int	ilen;
	int rilen;

	ilen = unsigned_len(num, find_base(chk));
	rilen = ilen;
	if (chk.precs == 0 && num == 0)
		rilen = 0;
	if (chk.precs > ilen || chk.field_width > rilen)
	{
		if (chk.precs > chk.field_width)
			rilen = chk.precs;
		else
			rilen = chk.field_width;
	}
	return (rilen);
}