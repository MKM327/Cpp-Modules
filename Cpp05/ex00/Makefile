SRC = main.cpp Bureaucrat.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++
RM = rm
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Bureaucrat

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re