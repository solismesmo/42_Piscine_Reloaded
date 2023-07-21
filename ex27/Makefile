SRCS	=	./display.c
OBJS	=	${SRCS:.c=.o}
NAME	=	ft_display_file
CC		=	gcc
RM		=	rm -f
CFLAGS	=	-Wall -Wextra -Werror


all : ${NAME}

%.o:%.c
		${CC} ${CFLAGS} -c $< -o $@

${NAME} : ${OBJS}
		${CC} ${CFLAGS} -o $@ ${OBJS}

clean :
		${RM} ${OBJS}

fclean : clean
		${RM} ${NAME}

re : fclean all

.PHONY: re fclean clean all