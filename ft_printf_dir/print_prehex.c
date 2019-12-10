/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_prehex.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/10 17:54:34 by ydag           #+#    #+#                */
/*   Updated: 2019/12/10 18:00:58 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_prehex(t_check fmt)
{
	char	c;

	c = fmt.conv_spc;
	if (c == 'p')
	{
		ft_putstr("0x");
		return (1);
	}
	return (0);
}
