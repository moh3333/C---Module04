/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthamir <mthamir@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-04-26 16:47:35 by mthamir           #+#    #+#             */
/*   Updated: 2025-04-26 16:47:35 by mthamir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(){
    type = "ice";
}   

Ice::Ice(std::string const& type){
    this->type = type;
}  

Ice::Ice(const Ice& other):AMateria(other){
    *this = other;
}

Ice& Ice::operator=(const Ice& other){
    if (this != &other){
        this->type = other.getType();
    }
    return (*this);
}   

Ice::~Ice(){
}

AMateria* Ice::clone() const {
    return (new Ice("ice"));
}

void Ice::use(ICharacter& target){
    std::cout <<  "* shoots an ice bolt at " << target.getName() << " *\n";
}