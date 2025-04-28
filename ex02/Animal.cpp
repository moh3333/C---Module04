/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:40:43 by mthamir           #+#    #+#             */
/*   Updated: 2025/04/25 16:24:38 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("DefaultTypeAnimal"){
	std::cout << "Animal Default Constructor Called\n";
}

Animal::Animal(const Animal& other){
	std::cout << "Animal Copy Constructor Called\n";
	*this = other;
}

Animal&	Animal::operator=(const Animal& other){
	std::cout << "Animal Copy Assignment Operatot Called\n";
	if (this != &other){
		this->type = other.type;
	}
	return (*this);
}

Animal::~Animal(){
	std::cout << "Animal Destructor Called\n";
}

std::string Animal::getType() const{
	std::cout << "getType Fun Called\n";
	return (type);
}
