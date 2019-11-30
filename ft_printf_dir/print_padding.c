/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_padding.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ydag <ydag@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/30 13:12:21 by ydag           #+#    #+#                */
/*   Updated: 2019/11/30 13:13:05 by ydag          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_padding(char c, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		ft_putchar(c);
		i++;
	}
	return (size);
}
