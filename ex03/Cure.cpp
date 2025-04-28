/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-26 16:47:28 by mthamir           #+#    #+#             */
/*   Updated: 2025-04-26 16:47:28 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(){
    type = "cure";
}   

Cure::Cure(std::string const& type){
    this->type = type;
}  

Cure::Cure(const Cure& other):AMateria(other){
    *this = other;
}

Cure& Cure::operator=(const Cure& other){
    if (this != &other){
        this->type = other.getType();
    }
    return (*this);
}   

Cure::~Cure(){
}

AMateria* Cure::clone() const {
    return (new Cure("cure"));
}

void Cure::use(ICharacter& target){
    std::cout <<  "* heals "<< target.getName() << "’s wounds *\n";
}