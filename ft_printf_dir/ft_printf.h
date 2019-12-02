/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: macbookpro <macbookpro@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/24 22:46:35 by macbookpro     #+#    #+#                */
/*   Updated: 2019/12/01 11:29:59 by ydag          ########   odam.nl         */
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

int					ft_printf(const char *format, ...);
t_check				init_check(t_check chk_frmt);
t_check				search_varg(t_check chk_frmt,
							const char **format, va_list ap);
t_check				search_flags(t_check chk_frmt, const char **format);
t_check				search_fwidth(t_check chk_frmt,
							const char **format, va_list ap);
t_check				search_prec(t_check chk_frmt,
							const char **format, va_list ap);
t_check				search_conv(t_check chk_frmt, const char **format);
int					print_varg(t_check chk_frmt, va_list ap);
int					is_flag(char c);
int					is_prec(char c);
int					is_conv(char c);
int					is_char(t_check chk);
int					is_signed(t_check chk_frmt);
int					is_string(t_check chk_frmt);
int					is_unsigned(t_check chk_frmt);
int					is_void(t_check chk_frmt);
int					len_of_chars(t_check chk_frmt, int num);
int					len_of_uchars(t_check chk, unsigned int num);
int					print_char(t_check chk_frmt, unsigned int c);
int					print_padding(char c, int size);
int					print_signed(t_check chk_frmt, int num);
int					print_string(t_check chk_frmt, char *str);
int					print_unsigned(t_check chk_frmt, unsigned int num);
int					unsigned_len(unsigned int num, int base);
int					find_base(t_check chk_frmt);
int					find_case(t_check chk_frmt);
void				unsigned_base(int n, int base, int up);
void				back_padding(t_check chk_frmt, int len);
void				front_padding(t_check chk_frmt, int num, int len);

#endif
