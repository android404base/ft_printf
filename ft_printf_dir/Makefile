# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ydag <ydag@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2019/11/30 14:28:29 by ydag           #+#    #+#                 #
#    Updated: 2019/12/02 13:16:31 by ydag          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME =		libftprintf.a

SRCS =		back_padding.c  find_base.c \
			find_case.c front_padding.c u_front_padding.c \
			ft_printf.c init_check.c is_char.c \
			is_conv.c is_flag.c is_prec.c \
			is_signed.c is_string.c is_unsigned.c \
			is_void.c len_of_chars.c len_of_uchars.c \
			print_string.c print_unsigned.c print_varg.c \
			print_char.c print_padding.c print_signed.c \
			search_conv.c search_flags.c search_fwidth.c \
			search_prec.c search_varg.c unsigned_base.c \
			unsigned_len.c libft/ft_strlen.c libft/ft_putstr.c \
			libft/ft_putchar.c libft/ft_putlong.c libft/ft_putnstr.c \
			libft/ft_isspace.c libft/ft_isupper.c libft/ft_itoa.c \
			libft/ft_isalpha.c libft/ft_isdigit.c libft/ft_islower.c \
			libft/ft_atoi.c 

OUT =		$(SRCS:%.c=%.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)
%.o : %.c
	@echo "Compiling $<"
	@gcc $(FLAGS) -c -o $@ $<

$(NAME): $(OUT)
	@ar rc $(NAME) $(OUT)
	@ranlib $(NAME)
	@echo "Created $(NAME)"

clean:
	@echo "Cleaning $(NAME)"
	@/bin/rm -f $(OUT)

fclean: clean
	@echo "Cleaning all"
	@/bin/rm -f $(NAME)

re: fclean all