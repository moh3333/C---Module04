/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:15:38 by mthamir           #+#    #+#             */
/*   Updated: 2025/04/25 16:26:03 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():brain(new Brain){
	std::cout << "Cat Default Constructor Called\n";
	this->type = "Cat";
}

Cat::Cat(const Cat& other):Animal(other){
	std::cout << "Cat Copy Constructor Called\n";
	*this = other;
}

Cat& Cat::operator=(const Cat& other){
	std::cout << "Cat Copy Assignment Operatot Called\n";
	if (this != &other){
		this->type = other.type;
		this->brain = new Brain(*other.brain);
	}	
	return (*this);
}

Cat::~Cat(){
	delete brain;
	std::cout << "Cat Destructor Called\n";
}

void	Cat::makeSound() const {
	std::cout << "[ CAT ]  MEAO  ...\n";
}