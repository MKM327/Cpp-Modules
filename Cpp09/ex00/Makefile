
NAME        := btc
CC         := c++
FLAGS    := -Wall -Wextra -Werror -std=c++98
SRCS        :=      main.cpp \
                        BitcoinExchange.cpp\

OBJS        := ${SRCS:.cpp=.o}

RM		    := rm -f

.cpp.o:
	${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}

${NAME}:	${OBJS}
			${CC} ${FLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

bonus:		all

clean:
			@ ${RM} *.o */*.o */*/*.o

fclean:		clean
			@ ${RM} ${NAME}
re:			fclean all

.PHONY:		all clean fclean re

