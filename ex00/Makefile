NAME = megaphone

all : $(NAME)

$(NAME) :
	@clang++ -Wall -Wextra -Werror *.cpp -o $(NAME)

clean :
	@rm -rf *.o

fclean : clean
	@rm -rf $(NAME)

re : fclean all
