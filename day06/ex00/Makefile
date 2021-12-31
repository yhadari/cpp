NAME = convert

all : $(NAME)

$(NAME) : *.cpp
	@clang++ -Wall -Wextra -Werror *.cpp -o $(NAME)

clean :
	@rm -rf $(NAME)

fclean : clean

re : fclean all
