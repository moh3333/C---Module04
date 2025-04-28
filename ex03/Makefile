NAME=InterfaceRecap

CC= c++ 

CPPFLAGS= 	-Wall -Wextra -Werror -std=c++98

SRC=	AMateria.cpp	Character.cpp	Cure.cpp	Ice.cpp	main.cpp	MateriaSource.cpp

OBJ= $(SRC:.cpp=.o)

HEADER=	AMateria.hpp Character.hpp  Cure.hpp  Ice.hpp  IMateriaSource.hpp ICharacter.hpp MateriaSource.hpp

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