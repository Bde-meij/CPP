NAME = DiamondClap
CC	= c++
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp \
FragTrap.cpp DiamondTrap.cpp

OBJFILES = $(SRC:%.cpp=%.o)
CFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

all	: $(NAME)

$(NAME) : $(OBJFILES)
	@$(CC) $(CFLAGS) $(OBJFILES) -o $(NAME)

%.o: %.cpp %.hpp Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all