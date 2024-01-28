
NAME = Zombie
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -I$(INCLUDE)
INCLUDE = includes
SRC_DIR = src
SRC = src/main.cpp src/NewZombie.cpp src/RandomChump.cpp src/Zombie.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	c++ $(CPPFLAGS) -g -c $< -o $@

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
