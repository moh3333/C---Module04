/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:27:38 by mthamir           #+#    #+#             */
/*   Updated: 2025/04/25 16:27:39 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout << "WrongCat Default Constructor Called\n";
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other):WrongAnimal(other){
	std::cout << "WrongCat Copy Constructor Called\n";
	*this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other){
	std::cout << "WrongCat Copy Assignment Constructor Called\n";
	if (this != &other){
		this->type = other.type;
	}	
	return (*this);
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat Destructor Called\n";
}

void	WrongCat::makeSound() const {
	std::cout << "[ WrongCat ]  MEAO  ...\n";
}
