NAME = megaphone

SRC = ./megaphone.cpp

FLAG = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):
		@clang++ $(FLAG) $(SRC) -o $(NAME)

clean:
	@echo -n

fclean: clean
	@rm -f $(NAME)

re: fclean all