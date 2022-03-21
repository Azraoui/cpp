# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/19 18:49:52 by ael-azra          #+#    #+#              #
#    Updated: 2022/03/21 10:20:20 by ael-azra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03

SRC = ./main.cpp ./AMateria.cpp ./Ice.cpp ./Cure.cpp ./MateriaSource.cpp ./Character.cpp

FLAG = -Wall -Wextra -Werror -std=c++98

OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(SRC)
	@clang++ $(FLAG) $(SRC) -c
	@clang++ $(FLAG) $(OBJS) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean