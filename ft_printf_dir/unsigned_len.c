/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   unsigned_len.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 13:48:13 by ydag           #+#    #+#                */
/*   Updated: 2019/12/16 12:53:35 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		unsigned_len(unsigned long long num, int base)
{
	int		len;

	len = 1;
	if (num != 0)
		len--;
	while (num != 0)
	{
		len++;
		num /= base;
	}
	return (len);
}
