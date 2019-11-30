/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   unsigned_base.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 14:10:39 by ydag           #+#    #+#                */
/*   Updated: 2019/11/30 14:18:29 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	unsigned_base(int n, int base, int up)
{
	const char			upc[] = "0123456789ABCDEF";
	const char			low[] = "0123456789abcdef";
	const char			*ptr;
	unsigned int		num;

	if (up)
		ptr = upc;
	else
		ptr = low;
	if (n < 0 && base == 10)
	{
		if (n < -(base - 1))
			unsigned_base((n / base) * -1, base, up);
		ft_putchar(ptr[(-(n % base))]);
	}
	num = n;
	if ((n >= 0 && base == 10) || base != 10)
	{
		if (num > (base - 1))
			unsigned_base(num / base, base, up);
		ft_putchar(ptr[(num % base)]);
	}
}
