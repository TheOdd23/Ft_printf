NAME	=	libftprintf.a
HEAD	=	includes/ft_printf.h
CC		=	gcc
FLAGS	=	-Wall -Werror -Wextra
SRCS	=	srcs/ft_printf.c srcs/ft_check_var.c srcs/ft_printchar.c srcs/ft_printhex.c srcs/ft_printnbr.c \
			srcs/ft_printunbr.c srcs/ft_printstr.c srcs/ft_itoa.c srcs/ft_printpnt.c
OBJS	=	${SRCS:.c=.o}
RM		=	rm -f

$(NAME)	:	 ${OBJS} ${HEAD}
	ar rcs ${NAME} ${OBJS}	

all		:	$(NAME)

clean	:	
	${RM} ${OBJS} 

fclean	:	clean
	$(RM) $(NAME)

re		:	${OBJS}
	ar rcs ${NAME} ${OBJS}

.PHONY	:	all clean fclean re
