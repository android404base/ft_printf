/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: macbookpro <macbookpro@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/24 22:46:35 by macbookpro     #+#    #+#                */
/*   Updated: 2019/11/26 23:40:36 by macbookpro    ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

# define FT_MIN(A, B) (((A) < (B)) ? (A) : (B))
# define FT_MAX(A, B) (((A) > (B)) ? (A) : (B))
# define FT_ABS(X) (((X) < 0) ? (-(X)) : (X))

typedef struct		s_check
{
	int				flag_zero;
	int				flag_minus;
	int				field_width;
	int				precs;
	char			conv_spc;
}					t_check;

t_check				init_check(t_check chk_frmt);
t_check				search_varg(t_check chk_frmt, const char *format, va_list ap);
t_check				search_flags(t_check chk_frmt, const char *format);
t_check				search_fwidth(t_check chk_frmt, const char *format, va_list ap);
t_check				search_prec(t_check chk_frmt, const char *format, va_list ap);
t_check				search_conv(t_check chk_frmt, const char *format);
int					print_varg(t_check chk_frmt, va_list ap);
int					is_flag(char c);
int					is_prec(char c);
int					is_conv(char c);

#endif
