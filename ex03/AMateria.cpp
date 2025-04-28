/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-26 16:15:46 by mthamir           #+#    #+#             */
/*   Updated: 2025-04-26 16:15:46 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria():type("Default"){
}

AMateria::AMateria(std::string const& type){
    this->type = type;
}

AMateria::AMateria(const AMateria& other){
    *this = other;
}

AMateria& AMateria::operator=(const AMateria& other){
    if (this != &other){
        this->type = other.getType();
    }
    return (*this);
}

AMateria::~AMateria(){
}

std::string const& AMateria::getType() const{
    return (type);
}

void AMateria::use(ICharacter& target){
    (void) target;
}
