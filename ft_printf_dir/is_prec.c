/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   is_prec.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: macbookpro <macbookpro@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/26 00:09:43 by macbookpro     #+#    #+#                */
/*   Updated: 2019/11/26 00:10:18 by macbookpro    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		is_prec(char c)
{
	if (c == '.')
		return (1);
	return (0);
}