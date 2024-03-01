NAME = Macros
NAME2 = Macros_test
CC	= c++
SRC = main.cpp lala.cpp
MACRO = -D TEST=1
OBJFILES = $(SRC:%.cpp=%.o)
CFLAGS = -Wall -Wextra -Werror -std=c++98

all	: $(NAME)

$(NAME)	: $(OBJFILES) $(SRC)
	$(CC) $(CFLAGS) $(OBJFILES) -o $(NAME)

test: $(NAME2)

$(NAME2) : $(SRC)
	$(CC) $(MACRO) $(CFLAGS) $(SRC) -o $(NAME2)

%.o: %.cpp %.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all