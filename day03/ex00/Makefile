NAME = claptrap

all : $(NAME)

$(NAME) : *cpp
	@clang++ -Wall -Wextra -Werror -std=c++98 *.cpp -o $(NAME)

clean :
	@rm -rf $(NAME)

fclean : clean

re : fclean all
