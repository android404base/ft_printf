/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: macbookpro <macbookpro@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/24 22:46:35 by macbookpro     #+#    #+#                */
/*   Updated: 2019/11/25 00:01:09 by macbookpro    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

typedef struct		s_check
{
	int				flag_zero;
	int				flag_minus;
	int				field_width;
	int				precs;
	char			conv_spc;			
}					t_check;

t_check				init_check(t_check chk_frmt);
t_check     		search_varg(t_check chk_frmt, const char *format, va_list ap);
int					print_varg(t_check chk_frmt, va_list ap);

#endif