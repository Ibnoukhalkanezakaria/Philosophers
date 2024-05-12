CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRC = Philosophers.c 

OBJ = ${SRC:.c=.o}

PROGRAM = philo

${PROGRAM}: ${OBJ}
	${CC} ${CFLAGS} -o $@ $^

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJ}

fclean:
	${RM} ${OBJ} ${PROGRAM}

re: fclean ${PROGRAM}