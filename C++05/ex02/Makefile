NAME = knightsWhoSayNi
CC	= c++
SRC = main.cpp Bureaucrat.cpp AForm.cpp \
ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp


OBJFILES = $(SRC:%.cpp=%.o)
CFLAGS = -Wall -Wextra -Werror -std=c++98

all	: $(NAME)

$(NAME) : $(OBJFILES)
	@$(CC) $(CFLAGS) $(OBJFILES) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all