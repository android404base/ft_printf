/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putlong.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 16:18:27 by ydag           #+#    #+#                */
/*   Updated: 2019/11/30 16:18:42 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlong(long long n)
{
	if (n < 0)
	{
		if (n < -9)
			ft_putlong((n / 10) * -1);
		ft_putchar(-(n % 10) + '0');
	}
	else
	{
		if (n > 9)
			ft_putlong(n / 10);
		ft_putchar((n % 10) + '0');
	}
}
