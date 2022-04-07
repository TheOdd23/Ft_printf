NAME	=	libftprintf.a
HEAD	=	ft_printf.h
CC		=	gcc
FLAGS	=	-Wall -Werror -Wextra
SRCS	=	ft_printf.c ft_check_var.c ft_printchar.c ft_printhex.c ft_printnbr.c ft_printunbr.c ft_printstr.c ft_itoa.c ft_printpnt.c
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
