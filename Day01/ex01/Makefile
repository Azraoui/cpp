# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/09 15:52:57 by ael-azra          #+#    #+#              #
#    Updated: 2022/03/09 15:52:58 by ael-azra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRC = ./main.cpp ./Zombie.cpp ./zombieHorde.cpp

FLAG = -Wall -Wextra -Werror -std=c++98

OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	@clang++ $(FLAG) $(SRC) -c
	@clang++ $(FLAG) $(OBJS) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean