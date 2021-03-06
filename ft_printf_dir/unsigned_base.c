/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   unsigned_base.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 14:10:39 by ydag           #+#    #+#                */
/*   Updated: 2019/12/20 15:36:29 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	unsigned_base(unsigned long long n, int base, int up)
{
	const char			upc[] = "0123456789ABCDEF";
	const char			low[] = "0123456789abcdef";
	const char			*ptr;

	if (up)
		ptr = upc;
	else
		ptr = low;
	if (n > (unsigned long long)(base - 1))
		unsigned_base(n / base, base, up);
	ft_putchar(ptr[(n % base)]);
}
