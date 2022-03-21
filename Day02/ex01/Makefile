# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/12 18:53:31 by ael-azra          #+#    #+#              #
#    Updated: 2022/03/12 18:55:43 by ael-azra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

SRC = ./main.cpp ./Fixed.cpp

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