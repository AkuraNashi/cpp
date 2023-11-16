CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = main.cpp ClapTrap.cpp
OBJECTS = $(SOURCES:.cpp=.o)

NAME = claptrap

all: $(NAME)

$(NAME):	$(OBJECTS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

%.o: %.cpp
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			rm -f $(OBJECTS)

fclean: 	clean
			rm -f $(NAME)

re:			fclean all
.PHONY: all clean fclean re