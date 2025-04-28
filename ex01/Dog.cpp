/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:02:47 by mthamir           #+#    #+#             */
/*   Updated: 2025/04/25 16:25:47 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():brain(new Brain){
	std::cout << "Dog Default Constructor Called\n";
	this->type = "Dog";
}

Dog::Dog(const Dog& other):Animal(other){
	std::cout << "Dog Copy Constructor Called\n";
	*this = other;
}

Dog& Dog::operator=(const Dog& other){
	std::cout << "Dog Copy Assignment Operatot Called\n";
	if (this != &other){
		this->type = other.type;
		this->brain = new Brain(*other.brain);
	}	
	return (*this);
}

Dog::~Dog(){
	delete brain;
	std::cout << "Dog Destructor Called\n";
}

void	Dog::makeSound() const {
	std::cout << "[ DOG ]  BARK  ...\n";
}