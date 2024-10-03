NAME= usefulFixedPoint
CPP= c++
CFLAGS= -Wall -Wextra -Werror -std=c++98 #-fsanitize=address # delete -std
SRC= main.cpp Fixed.cpp
OBJ= $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean