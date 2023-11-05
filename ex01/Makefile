NAME = Serialization
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -f
SRC = main.cpp Serializer.cpp\

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all