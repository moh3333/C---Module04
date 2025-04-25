# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mthamir <mthamir@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/25 15:40:51 by mthamir           #+#    #+#              #
#    Updated: 2025/04/25 16:21:42 by mthamir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=ClapTrap

CC= c++ 

CPPFLAGS=  -Wall -Wextra -Werror -std=c++98

SRC= Animal.cpp Dog.cpp Cat.cpp main.cpp 

OBJ= main.o Animal.o Dog.o Cat.o

HEADER= Animal.hpp Dog.hpp Cat.hpp

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(CPPFLAGS) $< -c -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all