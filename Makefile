CC = cc
CFLAGS = -Wall -Wextra -Werror -fsanitize=address #-fsanitize=thread
RM = rm -rf

SRC = philosophers.c parsing/print.c parsing/checker.c \
	  functions/ft_atoi.c execution/execution.c \

OBJ = ${SRC:.c=.o}

PROGRAM = philosophers

${PROGRAM}: ${OBJ}
	${CC} ${CFLAGS} -o $@ $^

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJ}

fclean:
	${RM} ${OBJ} ${PROGRAM}

re: fclean ${PROGRAM}