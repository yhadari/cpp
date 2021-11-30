NAME = replace

all : $(NAME)

$(NAME) :
	@clang++ -Wall -Wextra -Werror -std=c++98 *.cpp -o $(NAME)

clean :
	@rm -rf $(NAME)

fclean : clean
	@rm -rf *.replace
re : fclean all
