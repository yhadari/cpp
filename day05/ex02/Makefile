NAME = form
tree = *shrubbery

all : $(NAME)

$(NAME) : *.cpp
	@clang++ -Wall -Wextra -Werror -std=c++98 *.cpp -o $(NAME)

clean :
	@rm -rf $(NAME)
	@rm -rf $(tree)

fclean : clean

re : fclean all
