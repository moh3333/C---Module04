/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:27:33 by mthamir           #+#    #+#             */
/*   Updated: 2025/04/25 16:29:52 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("DefaultTypeWrongAnimal"){
    std::cout << "WrongAnimal Default Costructor Called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other){
    std::cout << "WrongAnimal Copy Costructor Called\n";
    *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
    std::cout << "WrongAnimal Copy Assignment Costructor Called\n";
    if (this != &other){
        this->type = other.type;
    }
    return (*this);
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal Destructor Called\n";
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal makeSound Fun Called\n";
}

std::string WrongAnimal::getType() const {
    std::cout << "WrongAnimal getType Fun Called\n";
    return (type);
}