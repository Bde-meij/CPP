NAME = iter
CC	= c++
SRC = main.cpp
HDRS = iter.hpp
OBJFILES = $(SRC:%.cpp=%.o)
CFLAGS = -Wall -Wextra -Werror #-fsanitize=address -std=c++98

all	: $(NAME)

$(NAME) : $(OBJFILES)
	@$(CC) $(CFLAGS) $(OBJFILES) -o $(NAME)

%.o: %.cpp $(HDRS)
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all